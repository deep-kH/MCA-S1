# Importing specific modules or functions
from Graphics.Rec import area as rect_area, perimeter as rect_perimeter
from Graphics.cir import area as circle_area, perimeter as circle_perimeter
from Graphics.threeD_graphics.sphere import area as sphere_area, volume as sphere_volume
from Graphics.threeD_graphics.cuboid import area as cuboid_area, volume as cuboid_volume
print("Importing Specific Modules")

print(rect_area(2,2))
print(rect_perimeter(2,2))
print(circle_area(3))
print(circle_perimeter(3))

print(sphere_area(4))
print(sphere_volume(4))
print(cuboid_area(1,2,3))
print(cuboid_volume(1,2,3))

#importing using *
from Graphics import *
from Graphics.threeD_graphics import *

print("Importing Using *")

print(Rec.area(2, 2))
print(Rec.perimeter(2, 2))
print(cir.area(3))
print(cir.perimeter(3))

print(sphere.area(4))
print(sphere.volume(4))
print(cuboid.area(1, 2, 3))
print(cuboid.volume(1, 2, 3))