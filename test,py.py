from selenium import webdriver
import time
driver = webdriver.Chrome()
driver.get("https://google.com")
print("Title Page: ", driver.title)
time.sleep(10)
driver.quit()