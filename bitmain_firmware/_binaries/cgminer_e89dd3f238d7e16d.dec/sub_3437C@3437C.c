int __fastcall sub_3437C(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+8h] [bp-80Ch] BYREF
  unsigned int v4; // [sp+808h] [bp-Ch]
  unsigned int *v5; // [sp+80Ch] [bp-8h]

  v5 = (unsigned int *)(a1 + 68);
  v4 = sub_2CD98(*(_DWORD *)(a1 + 68)) + 1;
  *v5 = sub_2CD98(v4);
  ++dword_90F44;
  ++*(_DWORD *)(a1 + 240);
  *(_DWORD *)(a1 + 248) = 0;
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v3, "Successfully rolled work");
    sub_1DB6C(7, v3, 0);
  }
  if ( *(_DWORD *)(a1 + 308) )
    sub_342F8(*(unsigned __int8 **)(a1 + 308), 1);
  result = sub_30C5C();
  *(_DWORD *)(a1 + 340) = result;
  return result;
}
