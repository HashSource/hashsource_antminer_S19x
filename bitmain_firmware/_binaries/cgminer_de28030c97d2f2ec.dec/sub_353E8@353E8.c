int __fastcall sub_353E8(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+8h] [bp-80Ch] BYREF
  unsigned int v4; // [sp+808h] [bp-Ch]
  unsigned int *v5; // [sp+80Ch] [bp-8h]

  v5 = (unsigned int *)(a1 + 68);
  v4 = sub_2DE60(*(_DWORD *)(a1 + 68)) + 1;
  *v5 = sub_2DE60(v4);
  ++dword_920DC;
  ++*(_DWORD *)(a1 + 240);
  *(_DWORD *)(a1 + 248) = 0;
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    strcpy(v3, "Successfully rolled work");
    sub_1E4EC(7, v3, 0);
  }
  if ( *(_DWORD *)(a1 + 308) )
    sub_35368(*(unsigned __int8 **)(a1 + 308), 1);
  result = sub_31D94();
  *(_DWORD *)(a1 + 340) = result;
  return result;
}
