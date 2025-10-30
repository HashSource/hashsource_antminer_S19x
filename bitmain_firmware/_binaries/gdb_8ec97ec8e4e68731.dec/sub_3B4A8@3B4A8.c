int __fastcall sub_3B4A8(int a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  int v7; // t1

  sub_25A418(a3, "c_iflag = 0x%x, c_oflag = 0x%x,\n", *a2, a2[1]);
  sub_25A418(a3, "c_cflag = 0x%x, c_lflag = 0x%x\n", a2[2], a2[3]);
  v5 = a2 + 4;
  v6 = a2 + 12;
  sub_25A418(a3, "c_cc: ");
  do
  {
    v7 = *((unsigned __int8 *)v5 + 1);
    v5 = (_DWORD *)((char *)v5 + 1);
    sub_25A418(a3, "0x%x ", v7);
  }
  while ( v5 != v6 );
  return sub_25A418(a3, (const char *)&word_356638);
}
