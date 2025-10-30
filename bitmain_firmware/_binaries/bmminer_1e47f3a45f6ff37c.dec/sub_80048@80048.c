const void *sub_80048()
{
  const void *v2; // [sp+Ch] [bp-8h]

  v2 = (const void *)sub_8BEB0(20, 576520, 576632, 0, sub_7F644);
  if ( v2 )
  {
    sub_7FF20(v2, 0);
    return v2;
  }
  else
  {
    sub_8CD10(2, "src/category_table.c", 49, "zc_hashtable_new fail");
    return 0;
  }
}
