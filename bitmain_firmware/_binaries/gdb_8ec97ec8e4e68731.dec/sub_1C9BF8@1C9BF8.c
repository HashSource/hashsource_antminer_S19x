int __fastcall sub_1C9BF8(int a1)
{
  void (__fastcall *v1)(void **, int); // r2
  int v2; // r4
  void *v4[3]; // [sp+4h] [bp-Ch] BYREF

  v1 = *(void (__fastcall **)(void **, int))(*(_DWORD *)a1 + 16);
  if ( v1 == (void (__fastcall *)(void **, int))sub_1C9ADC )
    return 0;
  v1(v4, a1);
  v2 = ((char *)v4[1] - (char *)v4[0]) >> 3;
  if ( !v4[0] )
    return v2;
  sub_339E64(v4[0]);
  return v2;
}
