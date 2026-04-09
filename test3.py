from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select 
import time
driver = webdriver.Chrome()
driver.get("https://demoqa.com/select-menu")
time.sleep(3)

a = Select(driver.find_element(By.ID, "oldSelectMenu"))
a.select_by_visible_text("Blue")
print("Dropdown selected")
time.sleep(3)

driver.get("https://demoqa.com/checkbox")
time.sleep(3)

a = driver.find_element(By.XPATH, "//span[@class='rct-checkbox']")
a.click()
print("Checkbox selected")
time.sleep(3)
driver.quit()