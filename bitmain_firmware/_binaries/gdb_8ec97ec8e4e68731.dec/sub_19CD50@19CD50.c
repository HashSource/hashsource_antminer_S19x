_DWORD *__fastcall sub_19CD50(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r4

  v8 = sub_93094(1u, 0x20u);
  *v8 = 1;
  v8[1] = a2;
  if ( a3 )
    v8[7] = sub_3272B4(a3, a4);
  *a1 = v8;
  return a1;
}
