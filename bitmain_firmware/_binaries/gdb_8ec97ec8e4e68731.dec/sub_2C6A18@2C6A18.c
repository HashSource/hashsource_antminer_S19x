void __fastcall sub_2C6A18(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // r6
  char *v5; // r0
  int v6; // r10
  char *i; // r5
  _DWORD *j; // r4
  int v9; // r3
  int v10; // r1

  if ( (*(_BYTE *)a2 & 3) != 2 && *(_DWORD *)(a1[1] + 4) == 5 )
  {
    v2 = a1[40];
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 2340) & 0x3F) == 4 )
      {
        v3 = *(_DWORD *)(a2 + 28);
        if ( *(_DWORD *)(v3 + 44) == 4 )
        {
          v5 = (char *)sub_2AB368(27);
          v6 = a1[25];
          for ( i = v5; v6; v6 = *(_DWORD *)(v6 + 12) )
          {
            for ( j = *(_DWORD **)(*(_DWORD *)(v6 + 140) + 160);
                  j;
                  *(_DWORD *)(v10 + 4) = *(_DWORD *)(*(_DWORD *)(v9 + 20) + 56)
                                       + *(_DWORD *)(v9 + 24)
                                       + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 20) + 60) + 28) )
            {
              switch ( j[4] )
              {
                case 0:
                case 1:
                  sprintf(i, "__vfp11_veneer_%x", *(_DWORD *)(j[2] + 12));
                  break;
                case 2:
                case 3:
                  sprintf(i, "__vfp11_veneer_%x_r", j[3]);
                  break;
                default:
                  sub_2A6BF0((int)"elf32-arm.c", 8337, (int)"bfd_elf32_arm_vfp11_fix_veneer_locations");
              }
              v9 = sub_2FC920(v3, i, 0);
              if ( !v9 )
              {
                sub_2A6A5C("%B: unable to find VFP11 veneer `%s'", a1, i);
                v9 = 0;
              }
              v10 = j[2];
              j = (_DWORD *)*j;
            }
          }
          free(i);
        }
      }
    }
  }
}
