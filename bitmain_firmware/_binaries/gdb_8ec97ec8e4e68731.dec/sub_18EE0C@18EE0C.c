int __fastcall sub_18EE0C(int *a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r7
  _BOOL4 v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r0

  if ( !sub_98F78(a1, &qword_4878EC) )
    sub_1851CC(*a1, a1[1], a1[2]);
  v2 = sub_1DDB40(*a1, a1[1], a1[2]);
  v3 = a1[5];
  v4 = v2;
  dword_4878F8 = sub_1DFB3C(v2);
  if ( sub_C4C8C(dword_4878F8) <= 0 )
    goto LABEL_15;
  v6 = sub_C4CA8(v3);
  if ( v6 <= 0 )
    goto LABEL_15;
  if ( dword_487930 )
  {
    v10 = (_DWORD *)sub_242FC8(v6);
    sub_2594B0(*v10, "infrun: syscall number = '%d'\n", v3);
  }
  v7 = a1[3];
  v8 = sub_D80E0(*(int **)(v4 + 4), dword_4878F8, *a1, a1[1], a1[2], (int)(a1 + 4));
  v9 = a1[3];
  *(_DWORD *)(v7 + 136) = v8;
  if ( *(_DWORD *)(v9 + 224) )
  {
LABEL_10:
    a1[4] = 1;
    a1[5] = 0;
    ((void (__fastcall *)(int *))loc_18DDF4)(a1);
    return 0;
  }
  if ( !sub_CF360(*(_DWORD *)(v9 + 136)) )
  {
LABEL_15:
    if ( !*(_DWORD *)(a1[3] + 224) )
    {
      sub_18C338(a1);
      return 1;
    }
    goto LABEL_10;
  }
  return 0;
}
