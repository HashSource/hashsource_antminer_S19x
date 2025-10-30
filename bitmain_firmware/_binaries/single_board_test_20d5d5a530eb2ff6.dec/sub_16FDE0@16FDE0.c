int __fastcall sub_16FDE0(int a1, int a2)
{
  _DWORD *v4; // r3
  unsigned __int8 *v5; // r6
  unsigned __int8 *v7; // r5
  unsigned __int8 *v8; // r6
  int v9; // r2
  int v10; // r3

  switch ( *(_DWORD *)a2 )
  {
    case 0:
      sub_B550C(a1, "othername:<unsupported>");
      return 1;
    case 1:
      sub_B550C(a1, "email:");
      goto LABEL_9;
    case 2:
      sub_B550C(a1, "DNS:");
      goto LABEL_9;
    case 3:
      sub_B550C(a1, "X400Name:<unsupported>");
      return 1;
    case 4:
      sub_B550C(a1, "DirName:");
      sub_129FD4(a1, *(int **)(a2 + 4), 0, 8520479);
      return 1;
    case 5:
      sub_B550C(a1, "EdiPartyName:<unsupported>");
      return 1;
    case 6:
      sub_B550C(a1, "URI:");
LABEL_9:
      sub_128190(a1, *(int **)(a2 + 4));
      return 1;
    case 7:
      v4 = *(_DWORD **)(a2 + 4);
      v5 = (unsigned __int8 *)v4[2];
      if ( *v4 == 4 )
      {
        sub_B550C(a1, "IP Address:%d.%d.%d.%d", *v5, v5[1], v5[2], v5[3]);
      }
      else if ( *v4 == 16 )
      {
        v7 = v5 + 2;
        v8 = v5 + 18;
        sub_B550C(a1, "IP Address");
        do
        {
          v9 = *(v7 - 2);
          v10 = *(v7 - 1);
          v7 += 2;
          sub_B550C(a1, ":%X", v10 | (v9 << 8));
        }
        while ( v7 != v8 );
        sub_B6C30(a1, (int)"\n");
      }
      else
      {
        sub_B550C(a1, "IP Address:<invalid>");
      }
      return 1;
    case 8:
      sub_B550C(a1, "Registered ID:");
      sub_127D14(a1, *(_DWORD *)(a2 + 4));
      return 1;
    default:
      return 1;
  }
}
