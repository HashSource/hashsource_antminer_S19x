int __fastcall sub_15DF58(int *a1, _DWORD *a2)
{
  int v3; // r4
  int v4; // r5
  _DWORD *v7; // r0
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r8
  int v11; // r5
  char *v12; // r0
  unsigned int v13; // [sp+4h] [bp-4h] BYREF

  v3 = a1[19];
  v4 = *(_DWORD *)(v3 + 40);
  if ( !v4 )
  {
    if ( sub_15DEBC((int)a1, (int *)&v13) )
    {
      v8 = v13;
      *(_DWORD *)(v3 + 40) = 1;
      v9 = sub_C3368(v8);
      *(_DWORD *)(v3 + 36) = v9;
      if ( dword_487724 )
      {
        v10 = *(_DWORD *)sub_242FC8(v9);
        v11 = *a1;
        v12 = sub_98B08(*(_DWORD *)(v3 + 36), 0);
        sub_2594B0(v10, "{ get_frame_func (this_frame=%d) -> %s }\n", v11, v12);
      }
      v4 = *(_DWORD *)(v3 + 40);
    }
    else
    {
      *(_DWORD *)(v3 + 40) = -1;
      if ( !dword_487724 )
        goto LABEL_6;
      v7 = (_DWORD *)sub_242FC8(0);
      sub_2594B0(*v7, "{ get_frame_func (this_frame=%d) -> unavailable }\n", *a1);
      v4 = *(_DWORD *)(v3 + 40);
    }
  }
  if ( v4 >= 0 )
  {
    *a2 = *(_DWORD *)(v3 + 36);
    return 1;
  }
LABEL_6:
  *a2 = -1;
  return 0;
}
