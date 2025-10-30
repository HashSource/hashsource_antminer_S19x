int __fastcall sub_1E4AF8(int a1)
{
  int v2; // r0
  int v3; // r5
  int (*v4)(); // r7
  int v5; // r0
  int v6; // r6
  int v8; // r0

  v2 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v2);
  v3 = dword_488C94;
  v4 = off_46D458;
  *(_DWORD *)(dword_488C94 + 52) = 0;
  v5 = *(_DWORD *)(v3 + 56);
  off_46D458 = (int (*)())sub_1E3390;
  v6 = sub_1FDE4C(v5, a1);
  if ( *(_DWORD *)(v3 + 52) )
    goto LABEL_7;
  while ( 1 )
  {
    off_46D458 = v4;
    if ( v6 >= 0 )
      break;
    if ( v6 == -3 )
    {
      sub_231E3C(2);
      v8 = sub_92F64(12, "Remote connection closed");
      off_46D458 = v4;
      sub_338FFC(v8);
    }
    if ( v6 != -1 )
      break;
    sub_16380();
LABEL_7:
    sub_158084();
  }
  return v6;
}
