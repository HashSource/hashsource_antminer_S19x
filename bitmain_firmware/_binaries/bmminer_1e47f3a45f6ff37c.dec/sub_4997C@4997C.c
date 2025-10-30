unsigned int __fastcall sub_4997C(char *a1)
{
  char v2; // r5
  int v3; // r6
  unsigned int v4; // r5
  int v5; // r8
  unsigned int result; // r0
  unsigned int v7; // r6

  v2 = *a1;
  v3 = (unsigned __int8)a1[2];
  sub_26AB4();
  v4 = v2 & 0xF;
  v5 = (unsigned __int8)a1[1];
  if ( v4 > 3 )
    return sub_4BB98(a1);
  if ( !sub_26C0C(v4) )
    return sub_4BB98(a1);
  v7 = sub_8F800(v3);
  result = sub_26A44();
  if ( v7 >= result )
    return sub_4BB98(a1);
  if ( v5 != 208 )
  {
    if ( v5 == 224 )
      return sub_49864(v4, v7, *((_DWORD *)a1 + 1), dword_535D8C + 8);
    return sub_4BB98(a1);
  }
  if ( (*((_DWORD *)a1 + 1) & 0x88) != 0 )
    *(_BYTE *)(*(_DWORD *)(dword_535D8C + 4) + v7 + (v4 << 8)) = 1;
  return result;
}
