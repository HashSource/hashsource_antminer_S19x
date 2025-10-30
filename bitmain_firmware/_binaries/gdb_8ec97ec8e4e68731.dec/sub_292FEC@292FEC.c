int __fastcall sub_292FEC(int a1)
{
  int *v1; // r4
  char v2; // r12
  int v3; // lr
  int v4; // r1
  int v5; // r3
  int *v6; // r3
  bool v7; // cc
  char *v8; // r3

  v4 = dword_48B704;
  if ( dword_48B708 > dword_48B704 )
    v5 = dword_48B708 - dword_48B704;
  else
    v5 = dword_48B704 - dword_48B708;
  if ( dword_48B708 > dword_48B704 )
    v6 = (int *)(v5 - 1);
  else
    v6 = (int *)(508 - v5);
  if ( dword_48B708 <= dword_48B704 )
    v6 = (int *)((char *)v6 + 3);
  if ( !v6 )
    return 0;
  if ( a1 == -1 )
  {
    v6 = &dword_48AAA0;
    v1 = &dword_48AAE0;
    v3 = dword_48AAA0;
  }
  else
  {
    v2 = a1;
  }
  if ( a1 == -1 )
  {
    *v1 = -1;
    v2 = 10;
    *v6 = v3 | 0x20000;
  }
  v7 = v4 + 1 < 512;
  dword_48B704 = v4 + 1;
  v8 = (char *)&dword_48B704 + v4;
  if ( v4 + 1 >= 512 )
    v4 = 0;
  v8[8] = v2;
  if ( !v7 )
    dword_48B704 = v4;
  return 1;
}
