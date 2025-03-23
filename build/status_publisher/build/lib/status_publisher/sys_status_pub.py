import rclpy
from rclpy.node import Node
from status_insterfaces.msg import SystemStatus
import psutil
import platform

class SysStatusPub (Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.status_publisher_ = self.create_publisher(SystemStatus,"sys_status",10)
        self.timer = self.create_timer(1,self.timer_callback )
    def timer_callback(self):
            cup_percent = psutil.cpu_percent()
            memory_info = psutil.virtual_memory()
            net_io_counters = psutil.net_io_counters()
            msg = SystemStatus()
            msg.stamp = self.get_clock().now().to_msg()
            msg.host_name = platform.node()
            msg.memory_percent = memory_info.percent
            self.get_logger().info(f'发布:str(msg)')
            self.status_publisher_.publish(msg)
def main():
    rclpy.init()
    node= SysStatusPub("sys_status_pub")
    rclpy.spin(node)
    rclpy.shutdown()





                                       
