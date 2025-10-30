// Alternative name is 'lcd_init'
int init_module()
{
  int v0; // r4

  gpio_direction_addr = ioremap(-536829372, 1);
  gpio_value_addr = ioremap(-536829884, 1);
  gpio_enable_addr = ioremap(-536829368, 1);
  lcd_hw_init(gpio_enable_addr);
  v0 = misc_register(&bitmain_lcd);
  if ( v0 )
  {
    v0 = -1;
    printk(&unk_C8B);
  }
  else
  {
    printk(&unk_CAC);
  }
  return v0;
}
