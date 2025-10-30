int __fastcall sub_147898(int a1, char *a2)
{
  int result; // r0
  int v4; // r0
  int *v5; // r3
  _DWORD *v6[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD v7[2]; // [sp+10h] [bp-10h] BYREF
  int v8; // [sp+18h] [bp-8h]
  int v9; // [sp+1Ch] [bp-4h]

  result = ((int (*)(void))loc_11EB1C)();
  if ( *(_DWORD *)(dword_4872D8 + 420) )
  {
    v6[0] = *(_DWORD **)(dword_4872D8 + 420);
    v6[1] = 0;
    v6[2] = 0;
    v7[1] = 0;
    v9 = 0;
    v6[3] = (_DWORD *)1;
    v4 = sub_124404(v6[0], a2, v7);
    if ( v4 )
    {
      v5 = (int *)v7[0];
    }
    else
    {
      v7[0] = 0;
      v8 = 0;
    }
    if ( v4 )
      v8 = *v5;
    while ( 1 )
    {
      result = sub_11E1D8(v6);
      if ( !result )
        break;
      sub_147398(result);
    }
  }
  return result;
}
