_DWORD *__fastcall sub_19CC9C(_DWORD *a1, int *a2, int a3)
{
  _DWORD *v6; // r0
  const void *v7; // r5
  _DWORD *v8; // r4
  signed int v9; // r1

  v6 = sub_93094(1u, 0x20u);
  v7 = (const void *)*a2;
  v8 = v6;
  *v6 = 0;
  v6[1] = a3;
  if ( v7 )
  {
    sub_198DE4(a2);
    v9 = sub_5B008((unsigned int)v7, *a2) - (_DWORD)v7;
    if ( v9 > 0 )
      v8[2] = sub_93330(v7, v9);
  }
  *a1 = v8;
  return a1;
}
