int __fastcall sub_146C8(_DWORD *a1, char a2)
{
  int v2; // r2
  int v3; // lr
  int v5; // [sp+4h] [bp-8h]

  if ( !a1 || *a1 != 1114990113 )
    sub_10C38();
  v2 = a1[3];
  if ( (unsigned int)(v2 + 1) > a1[2] )
    sub_10C38();
  v3 = a1[1];
  a1[3] = v2 + 1;
  *(_BYTE *)(v3 + v2) = a2;
  return v5;
}
