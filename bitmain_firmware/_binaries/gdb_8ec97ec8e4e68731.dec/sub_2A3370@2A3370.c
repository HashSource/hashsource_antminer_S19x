int __fastcall sub_2A3370(char *a1, size_t a2, int a3)
{
  size_t v5; // r0
  size_t v6; // r4

  snprintf(byte_48BBB8, 0x15u, "%-10lu", a3);
  v5 = strlen(byte_48BBB8);
  if ( v5 > a2 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(19);
    return 0;
  }
  else
  {
    if ( v5 >= a2 )
    {
      memcpy(a1, byte_48BBB8, a2);
    }
    else
    {
      v6 = v5;
      memcpy(a1, byte_48BBB8, v5);
      memset(&a1[v6], 32, a2 - v6);
    }
    return 1;
  }
}
