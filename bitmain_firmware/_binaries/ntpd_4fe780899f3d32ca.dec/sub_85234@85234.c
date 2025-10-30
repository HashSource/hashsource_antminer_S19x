char *__fastcall sub_85234(int a1)
{
  _DWORD *v1; // r5

  v1 = *(_DWORD **)(a1 + 80);
  if ( !v1 )
  {
    fprintf(stderr, off_B8504[0]);
    sub_7CE5C(1);
  }
  *(_DWORD *)(a1 + 80) = 0;
  sub_85140((void *)a1);
  memcpy((void *)a1, v1, 0x84u);
  memcpy(*(void **)(a1 + 68), v1 + 33, v1[25] << 6);
  *(_DWORD *)(a1 + 80) = v1;
  return sub_7E680((char *)a1);
}
