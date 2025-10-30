int __fastcall sub_7D1C4(int a1, int a2, const void *a3, size_t a4, size_t *a5)
{
  if ( a4 > 0x4000 )
  {
    sub_95494(a1, 80, 545, 68, "ssl/record/rec_layer_d1.c", 792);
    return -1;
  }
  else
  {
    *(_DWORD *)(a1 + 20) = 1;
    return sub_7CE6C(a1, a2, a3, a4, 0, a5);
  }
}
