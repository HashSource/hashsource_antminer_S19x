const void *sub_7CC74()
{
  const void *v2; // [sp+Ch] [bp-8h]

  v2 = (const void *)sub_88B20(20, 563324, 563436, 0, sub_7C26C);
  if ( v2 )
  {
    sub_7CB4C(v2, 0);
    return v2;
  }
  else
  {
    sub_89984(2, "src/category_table.c", 49, "zc_hashtable_new fail");
    return 0;
  }
}
