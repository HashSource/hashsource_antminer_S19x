int __fastcall sub_2DB04(_BYTE *a1, __int16 a2)
{
  _BYTE *v2; // r3
  unsigned __int16 v7; // [sp+Ch] [bp-8h]
  unsigned __int8 v8; // [sp+Eh] [bp-6h]
  unsigned __int8 v9; // [sp+Fh] [bp-5h]

  v9 = -1;
  v8 = -1;
  while ( a2-- )
  {
    v2 = a1++;
    v7 = (unsigned __int8)(v8 ^ *v2);
    v8 = v9 ^ byte_6C9D4[v8 ^ *v2];
    v9 = byte_6CAD4[v7];
  }
  return (unsigned __int16)(v9 << 8) | (unsigned __int16)v8;
}
