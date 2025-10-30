int __fastcall sub_9D7DC(int a1, int a2, _DWORD *a3)
{
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v9; // r1
  int v10; // r6
  int v11; // r0

  if ( a2 )
  {
    if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a2 + 32) >> 3)) != 12 )
    {
      if ( (*(_BYTE *)(a2 + 33) & 2) == 0 )
      {
        v9 = *a3;
        v10 = a3[1];
        a3[3] = 1;
        v11 = sub_21C7C8(a2, v9);
        sub_9D6C0(v10, v11, a1);
        return 0;
      }
      a3[2] = a2;
    }
    return 0;
  }
  else
  {
    if ( !a3[3] )
    {
      v5 = a3[2];
      if ( v5 )
      {
        v6 = a3[1];
        v7 = sub_21C7C8(v5, *a3);
        sub_9D6C0(v6, v7, a1);
      }
    }
    a3[3] = 0;
    a3[2] = 0;
    return 0;
  }
}
