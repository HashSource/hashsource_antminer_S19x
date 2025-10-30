void __fastcall sub_63D30(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r6
  char *v7; // r5
  int v8; // r0
  int *v9; // r2
  int v10; // [sp+Ch] [bp-4h] BYREF
  int v11; // [sp+10h] [bp+0h] BYREF
  int v12; // [sp+14h] [bp+4h] BYREF
  int v13; // [sp+18h] [bp+8h]
  _BYTE var24[60]; // [sp+1Ch] [bp+Ch] BYREF

  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v5 = sub_602EC("-exec-run", a3, a2, (int)&off_35B3FC, &v11, &v12);
    if ( v5 < 0 )
      break;
    if ( !v5 )
      v10 = 1;
  }
  if ( v11 != a3 )
    sub_946E0("Invalid argument: %s", *(const char **)(a2 + 4 * v11));
  v6 = *(_DWORD *)(dword_47486C + 32);
  if ( v6 )
  {
    v13 = dword_487D2C;
    ((void (__fastcall *)(_BYTE *))loc_23FF20)(var24);
    sub_183B38(sub_638B0, &v10);
    ((void (__fastcall *)(_BYTE *))loc_23FC8C)(var24);
    ((void (__fastcall *)(int))loc_1CD290)(v13);
  }
  else
  {
    v7 = "run";
    if ( v10 )
      v7 = "start";
    v8 = sub_230F34(v5);
    if ( dword_474864 && (*(int (**)(void))(v8 + 344))() )
    {
      v9 = (int *)&unk_35AF90;
      v6 = 1;
    }
    else
    {
      v9 = 0;
    }
    sub_63680(v7, v6, v9);
  }
}
