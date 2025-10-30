void __fastcall sub_5933C(int a1, char *a2)
{
  _DWORD *v2; // r4
  int v4; // r7
  int v5; // r6
  int v6; // r1
  int v7; // r8
  int v8; // r9
  _DWORD *v9; // r11
  int v10; // r2
  int v11; // r4
  void *v12; // r0
  int v13; // [sp+0h] [bp-14h]
  int v14; // [sp+4h] [bp-10h]

  v2 = *(_DWORD **)(a1 + 84);
  if ( v2 )
  {
    v4 = dword_487668;
    v5 = sub_9836C(36);
    sub_59198(v5, a2);
    if ( dword_474814 == dword_474818 )
    {
      sub_596B0(&dword_474810);
      v6 = dword_474814;
    }
    else
    {
      v6 = dword_474814 + 4;
      if ( dword_474814 )
        *(_DWORD *)dword_474814 = v5;
      dword_474814 = v6;
    }
    if ( dword_474758 < (unsigned int)((v6 - dword_474810) >> 2) )
      sub_946E0("Max user call depth exceeded -- command aborted.");
    v7 = dword_487668;
    v8 = dword_46B144;
    v9 = (_DWORD *)(dword_487668 + 36);
    v13 = *(_DWORD *)(dword_487668 + 36);
    ++dword_46B144;
    v10 = *(_DWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 48) = 0;
    *v9 = 0;
    v14 = v10;
    while ( (unsigned int)sub_58FE8((int)v2) <= 1 )
    {
      v2 = (_DWORD *)*v2;
      if ( !v2 )
        goto LABEL_10;
    }
    sub_946B0("Error executing canned sequence of commands.");
LABEL_10:
    dword_46B144 = v8;
    if ( v7 != -36 )
      *(_DWORD *)(v7 + 36) = v13;
    if ( v4 != -48 )
      *(_DWORD *)(v4 + 48) = v14;
    v11 = *(_DWORD *)(dword_474814 - 4);
    dword_474814 -= 4;
    if ( v11 )
    {
      v12 = *(void **)(v11 + 24);
      if ( v12 )
        sub_339E64(v12);
      if ( *(_DWORD *)v11 != v11 + 8 )
        sub_339E64(*(void **)v11);
      sub_33AC04((void *)v11);
    }
  }
}
