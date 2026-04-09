from selenium import webdriver
import time
driver = webdriver.Chrome()
driver.get("https://google.com")
time.sleep(3)
driver.save_screenshot("google.png")
print("Screenshot saved Successfully ")
time.sleep(3)
driver.quit()