_DWORD *__fastcall sub_270E30(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  _BYTE *v7; // r8
  void *v8; // r2
  _BYTE *v9; // r3
  __int64 v10; // r0
  int v11; // r2
  int v12; // r0
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  _QWORD v15[3]; // [sp+4h] [bp-18h] BYREF

  v6 = sub_9836C(0x9Cu);
  sub_26FFD0((int)v6, *(_DWORD *)(a1 + 104));
  sub_33C508(v6, a3);
  v6[18] = a2;
  v6[22] = a1;
  v7 = v6 + 14;
  if ( sub_EEA18((int)v6) )
  {
    sub_931D8((char **)&ptr, "%s.%d_anonymous", *(const char **)(a1 + 48), a2);
    v8 = ptr;
    v9 = (_BYTE *)v6[12];
    if ( ptr != (char *)v15 + 4 )
    {
      v10 = v15[0];
      if ( v9 == v7 )
      {
LABEL_4:
        v6[12] = v8;
        *(_QWORD *)(v6 + 13) = v10;
LABEL_5:
        ptr = (char *)v15 + 4;
        v9 = (char *)v15 + 4;
        goto LABEL_10;
      }
      goto LABEL_8;
    }
LABEL_15:
    sub_33B48C(v6 + 12, &ptr);
    v9 = ptr;
    goto LABEL_10;
  }
  sub_931D8((char **)&ptr, "%s.%s", *(const char **)(a1 + 48), (const char *)*v6);
  v8 = ptr;
  v9 = (_BYTE *)v6[12];
  if ( ptr == (char *)v15 + 4 )
    goto LABEL_15;
  v10 = v15[0];
  if ( v9 == v7 )
    goto LABEL_4;
LABEL_8:
  v6[12] = v8;
  v6[13] = v10;
  v11 = v6[14];
  v6[14] = HIDWORD(v10);
  if ( !v9 )
    goto LABEL_5;
  ptr = v9;
  HIDWORD(v15[0]) = v11;
LABEL_10:
  LODWORD(v15[0]) = 0;
  *v9 = 0;
  if ( ptr != (char *)v15 + 4 )
    sub_339E64(ptr);
  sub_26FA70(v6);
  v12 = *(_DWORD *)(a3 + 24);
  if ( v12 )
    v6[19] = sub_26EDE8(v12, 0, 0);
  else
    v6[19] = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)(v6[26] + 36) + 20))(v6[22], v6[18]);
  sub_270830((int)v6, *(_DWORD *)(a3 + 24), 1);
  return v6;
}
