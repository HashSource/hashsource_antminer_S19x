int __fastcall sub_1DC2E4(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r7
  _DWORD *v6; // r4
  unsigned __int16 v7; // r0
  int v8; // r3
  char *v9; // r2
  char *v11; // r0
  __int64 v12; // r0

  if ( (unsigned int)dword_487D4C > 1 )
  {
    v4 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v4, "Process record: add register num = %d to record list.\n", a2);
  }
  v5 = sub_1DD58C(a1);
  v6 = sub_93094(1u, 0x20u);
  v6[2] = 1;
  *((_WORD *)v6 + 8) = a2;
  v7 = ((int (__fastcall *)(int, int))loc_1DD420)(v5, a2);
  *((_WORD *)v6 + 9) = v7;
  if ( v7 <= 8u )
  {
    v8 = v6[2];
    if ( v8 != 1 )
      goto LABEL_5;
    goto LABEL_12;
  }
  v11 = (char *)sub_93028(v7);
  v8 = v6[2];
  v9 = v11;
  v6[5] = v11;
  if ( v8 == 1 )
  {
    if ( *((unsigned __int16 *)v6 + 9) > 8u )
    {
LABEL_9:
      sub_1DDE6C(a1, a2, v9);
      sub_1D8780((int)v6);
      return 0;
    }
LABEL_12:
    v9 = (char *)(v6 + 5);
    goto LABEL_9;
  }
LABEL_5:
  if ( v8 == 2 )
  {
    if ( v6[5] <= 4u )
      v9 = (char *)(v6 + 7);
    else
      v9 = (char *)v6[7];
    goto LABEL_9;
  }
  v12 = ((__int64 (*)(void))loc_161F0)();
  return sub_1DC3D4(v12, HIDWORD(v12));
}
