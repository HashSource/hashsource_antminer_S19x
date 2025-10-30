int (__fastcall *__fastcall sub_231B78(int a1))(int a1)
{
  int *v2; // r3
  int v3; // r1
  int *v5; // r4
  _DWORD *v6; // r0
  int v7; // r0

  if ( *(_DWORD *)(a1 + 736) == 3840 )
  {
    v2 = (int *)dword_489F70;
    if ( dword_489F70 )
    {
      v3 = *(_DWORD *)(a1 + 312);
      if ( v3 < *(_DWORD *)(dword_489F70 + 312) )
      {
        while ( 1 )
        {
          v5 = v2;
          v2 = (int *)*v2;
          if ( !v2 )
            break;
          if ( v2[78] <= v3 )
            goto LABEL_9;
        }
      }
      else
      {
        v5 = &dword_489F70;
LABEL_9:
        if ( v2[78] != v3 )
          goto LABEL_8;
        while ( 1 )
        {
          *v5 = *v2;
          *v2 = 0;
          ((void (__fastcall *)(int *))loc_231AD8)(v2);
          v2 = (int *)*v5;
          if ( !*v5 )
            break;
          if ( *(_DWORD *)(a1 + 312) != v2[78] )
            goto LABEL_8;
        }
      }
    }
    else
    {
      v5 = &dword_489F70;
    }
    v2 = 0;
LABEL_8:
    *(_DWORD *)a1 = v2;
    *v5 = a1;
    return sub_22DE18();
  }
  v6 = (_DWORD *)sub_242FB4(a1);
  sub_2594B0(*v6, "Magic number of %s target struct wrong\n", *(const char **)(a1 + 4));
  v7 = sub_94700((int)"target.c", 653, "failed internal consistency check");
  return (int (__fastcall *)(int))sub_231C68(v7);
}
