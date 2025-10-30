const void *sub_80974()
{
  const void *v2; // [sp+Ch] [bp-8h]

  v2 = (const void *)sub_88B20(20, 563324, 563436, 0, 525964);
  if ( v2 )
  {
    sub_8084C(v2, 0);
    return v2;
  }
  else
  {
    sub_89984(2, "src/record_table.c", 49, "zc_hashtable_new fail");
    return 0;
  }
}
