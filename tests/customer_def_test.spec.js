import { test, expect } from '@playwright/test';

test.describe('AppComponent', () => {
  test('should display the title \"transformer\"', async ({ page }) => {
    // Navigate to the app's root page
    await page.goto('http://localhost:4200/');
    
    // Check if the title exists in the DOM
    await expect(page.locator('body')).toContainText('transformer');
  });
});