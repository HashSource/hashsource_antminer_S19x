int __fastcall sub_7B800(int a1, char a2, int a3)
{
  _DWORD *v6; // r3
  bool v7; // zf
  bool v8; // zf
  int *v9; // r4
  bool v10; // zf
  bool v11; // zf
  int v12; // r4
  _DWORD *v13; // r3
  bool v14; // zf
  int v15; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  _DWORD *v21; // r3
  int v22; // [sp+4h] [bp-4h] BYREF

  v7 = (a2 & 2) == 0;
  v22 = a1;
  v6 = *(_DWORD **)a1;
  if ( v7 )
    goto LABEL_6;
  v7 = v6 == (_DWORD *)25;
  if ( v6 != (_DWORD *)25 )
    v7 = v6 == (_DWORD *)28;
  if ( v7 )
  {
LABEL_6:
    v8 = v6 == (_DWORD *)28;
    if ( v6 != (_DWORD *)28 )
      v8 = v6 == (_DWORD *)25;
    if ( v8 )
    {
      v6 = *(_DWORD **)(a1 + 8);
      v9 = (int *)(a1 + 8);
    }
    else
    {
      v9 = &v22;
    }
    if ( v8 )
      v6 = (_DWORD *)*v6;
  }
  else
  {
    if ( a3 )
      v19 = 28;
    else
      v19 = 25;
    v20 = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(v19, a1, 0);
    v21 = *(_DWORD **)(v20 + 8);
    v9 = (int *)(v20 + 8);
    v22 = v20;
    v6 = (_DWORD *)*v21;
  }
  if ( (a2 & 4) == 0 )
    goto LABEL_18;
  v10 = v6 == (_DWORD *)26;
  if ( v6 != (_DWORD *)26 )
    v10 = v6 == (_DWORD *)29;
  if ( v10 )
  {
LABEL_18:
    v11 = v6 == (_DWORD *)29;
    if ( v6 != (_DWORD *)29 )
      v11 = v6 == (_DWORD *)26;
    if ( v11 )
    {
      v12 = *v9;
      v13 = *(_DWORD **)(v12 + 8);
      v9 = (int *)(v12 + 8);
      v6 = (_DWORD *)*v13;
    }
  }
  else
  {
    if ( a3 )
      v17 = 29;
    else
      v17 = 26;
    v18 = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(v17, *v9, 0);
    *v9 = v18;
    v9 = (int *)(v18 + 8);
    v6 = **(_DWORD ***)(v18 + 8);
  }
  if ( (a2 & 1) != 0 )
  {
    v14 = v6 == (_DWORD *)27;
    if ( v6 != (_DWORD *)27 )
      v14 = v6 == (_DWORD *)30;
    if ( !v14 )
    {
      if ( a3 )
        v15 = 30;
      else
        v15 = 27;
      *v9 = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(v15, *v9, 0);
    }
  }
  return v22;
}
