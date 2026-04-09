from selenium import webdriver
import time
driver = webdriver.Chrome()
driver.get("https://www.google.com")
print("Opened Google")
time.sleep(5)

driver.get("https://www.youtube.com")
print("Opened YouTube")
time.sleep(5)

driver.back()
print("Navigate Back")
time.sleep(3)

driver.forward()
print("Navigate Forward")
time.sleep(3)

driver.refresh()
print("Refresh page")
time.sleep(3)

driver.quit()
