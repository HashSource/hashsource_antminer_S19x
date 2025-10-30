int __fastcall sub_B1B34(int a1, int a2, int a3)
{
  char *v3; // r3
  int v4; // r4
  int v6; // r2
  size_t v7; // r2
  int v9; // r6
  __int64 v10; // r8
  int v11; // r1
  __int64 v12; // r0
  int v13; // r8
  int v14; // r1
  int v15; // r9
  int v16; // r0
  int v17; // r1
  bool v18; // zf
  int v19; // r8
  void *v20; // r10
  int v21; // r6
  int v22; // r1
  int v23; // r7
  int v24; // r8
  int v25; // r1
  int v26; // r9
  int v27; // r1
  int v28; // r1
  int v29; // r3

  v3 = *(char **)(a1 + 24);
  v18 = a3 == 0;
  v4 = a1;
  v6 = *v3;
  if ( v18 )
  {
    while ( v6 == 12 )
    {
      v9 = *((_DWORD *)v3 + 5);
      if ( !v9 )
      {
        v19 = v4;
        goto LABEL_17;
      }
      if ( sub_172880(v4)
        || (LODWORD(v10) = sub_9E8E8(v4), HIDWORD(v10) = v11, LODWORD(v12) = sub_9E8E8(v9), v10 != v12) )
      {
        v3 = *(char **)(v4 + 24);
        v6 = *v3;
        break;
      }
      v13 = sub_9E7EC(v4);
      v15 = v14;
      v16 = sub_9E7EC(v9);
      v18 = v15 == v17;
      v3 = *(char **)(v4 + 24);
      if ( v15 == v17 )
        v18 = v13 == v16;
      if ( !v18 )
      {
        v6 = *v3;
        break;
      }
      v4 = *((_DWORD *)v3 + 5);
      v3 = *(char **)(v4 + 24);
      v6 = *v3;
    }
  }
  if ( v6 == 5 || v6 == 12 )
  {
    v29 = *((_DWORD *)v3 + 5);
    v19 = v4;
    if ( v29 )
      v4 = v29;
LABEL_17:
    v20 = sub_92E28();
    v21 = sub_9E8E8(v19);
    v23 = v22;
    v24 = sub_9E7EC(v19);
    v26 = v25;
    sub_92E40((int)v20);
    sub_B3E5C(v4, v27, v21, v23, a2);
    sub_25A418(a2, " .. ");
    return sub_B3E5C(v4, v28, v24, v26, a2);
  }
  else
  {
    v7 = sub_9E5E8(*((const char **)v3 + 2));
    return sub_25A418(a2, "%.*s", v7, *(const char **)(*(_DWORD *)(v4 + 24) + 8));
  }
}
