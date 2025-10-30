int __fastcall sub_1E49A0(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r5
  int (*v7)(); // r6
  int v8; // r0
  int result; // r0
  int v10; // r0

  v4 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v4);
  v5 = a1;
  v6 = dword_488C94;
  v7 = off_46D458;
  *(_DWORD *)(dword_488C94 + 52) = 0;
  v8 = *(_DWORD *)(v6 + 56);
  off_46D458 = (int (*)())sub_1E3390;
  result = sub_1FDF04(v8, v5, a2);
  if ( result )
  {
    sub_16380();
    off_46D458 = v7;
    sub_338FFC(v10);
  }
  if ( *(_DWORD *)(v6 + 52) )
    result = sub_158084();
  off_46D458 = v7;
  return result;
}
