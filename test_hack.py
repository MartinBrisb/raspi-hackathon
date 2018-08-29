'''
Created on 29 août 2018

@author: TE261765
'''
from subprocess import call
import time

# load driver
load_driver = call(["insmod", "/lib/modules/4.9.35/kernel/drivers/iio/imu/st_lsm6dsx/st_lsm6dsx.ko reg=\"0x6b\" interrupt-parent=\"&gpio\" interrupts=\"0 IRQ_TYPE_EDGE_RISING\""])
print("lsm6ds1 driver loaded, result: %s" % (load_driver))

# read continuously accelerometer values
with open("/dev/iio:lsm6dsm", 'r') as accel:
    print("Measured acceleration: %s" % (accel.read()))
    time.sleep(1)
