unsigned int __fastcall sub_25F43C(int a1, int a2)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r0
  int v6; // r8
  _DWORD *v7; // r0
  int v8; // r9
  int v9; // r10
  _BOOL4 v10; // r4
  _BOOL4 v11; // r5
  void *v12; // r1
  void *v13; // r2
  void *v14; // r2
  _BOOL4 v15; // r4
  int v17; // r0
  __int64 v18; // r0
  _BOOL4 v19; // r3
  bool v20; // zf
  unsigned int v21; // r3
  bool v22; // cc
  bool v23; // zf
  unsigned int v24; // r4
  unsigned int v25; // r4
  unsigned int v26; // r4
  int v27; // [sp+Ch] [bp-28h]
  int v28; // [sp+10h] [bp-24h] BYREF
  int v29; // [sp+14h] [bp-20h] BYREF
  void *v30[3]; // [sp+18h] [bp-1Ch] BYREF
  void *ptr; // [sp+24h] [bp-10h] BYREF
  int v32; // [sp+28h] [bp-Ch]
  int v33; // [sp+2Ch] [bp-8h]

  v3 = sub_26EAAC(a1);
  v4 = sub_26EAAC(a2);
  v5 = (_DWORD *)sub_26BC70(v3);
  v6 = sub_171258(v5);
  v7 = (_DWORD *)sub_26BC70(v4);
  v8 = sub_171258(v7);
  v9 = **(char **)(v8 + 24);
  v27 = **(char **)(v6 + 24);
  v10 = sub_1736DC((_DWORD *)v6) != 0;
  v11 = sub_1736DC((_DWORD *)v8) != 0;
  if ( !v10 || !v11 )
  {
    if ( v10 | (unsigned __int8)sub_26E9E0(v3) )
    {
      if ( v11 | (unsigned __int8)sub_26E9E0(v4) )
      {
        v12 = *(void **)(v8 + 20);
        v13 = *(void **)(v6 + 20);
        v30[0] = (void *)(v10 && v11);
        v30[1] = (void *)(v10 && v11);
        v30[2] = (void *)(v10 && v11);
        if ( v12 < v13 )
          v12 = v13;
        ptr = (void *)(v10 && v11);
        v32 = v10 && v11;
        v33 = v10 && v11;
        if ( v12 )
        {
          sub_AF660((char **)v30, (unsigned int)v12);
          v21 = *(_DWORD *)(v8 + 20);
          v12 = ptr;
          if ( v21 < *(_DWORD *)(v6 + 20) )
            v21 = *(_DWORD *)(v6 + 20);
          v14 = (void *)(v32 - (_DWORD)ptr);
          v22 = v32 - (int)ptr > v21;
          if ( v32 - (int)ptr < v21 )
          {
            sub_AF660((char **)&ptr, v21 - (_DWORD)v14);
            v14 = v30[0];
            v12 = ptr;
          }
          else
          {
            if ( (unsigned int)v14 <= v21 )
              v14 = v30[0];
            else
              v21 += (unsigned int)ptr;
            if ( v22 )
            {
              v14 = v30[0];
              v32 = v21;
            }
          }
        }
        else
        {
          v14 = 0;
        }
        sub_25C7F4(v3, v4, v14, &v28, v12, &v29);
        v15 = ((int (__fastcall *)(void *, int, void *, int))loc_252C74)(v30[0], v28, ptr, v29) == -1;
        if ( ptr )
          sub_339E64(ptr);
        if ( v30[0] )
          sub_339E64(v30[0]);
        return v15;
      }
      v19 = v9 == 1;
      v23 = v27 == 1;
      if ( v27 == 1 )
        v23 = v9 == 1;
      if ( !v23 )
      {
LABEL_17:
        if ( v10 && v19 )
        {
          v26 = sub_26EB1C(v3);
          return sub_26EBA8(v4) > v26;
        }
        else
        {
          v20 = v27 == 13;
          if ( v27 == 13 )
            v20 = v9 == 13;
          if ( !v20 )
            sub_946E0("Invalid type combination in ordering comparison.");
          return (unsigned int)sub_25C748(v3, v4) >> 31;
        }
      }
    }
    else
    {
      v19 = v9 == 1;
      if ( v27 != 1 || !v19 )
      {
        if ( !v11 || v27 != 1 )
          goto LABEL_17;
        v25 = sub_26EBA8(v3);
        return v25 < (unsigned int)sub_26EB1C(v4);
      }
    }
    v24 = sub_26EBA8(v3);
    return v24 < sub_26EBA8(v4);
  }
  v17 = sub_25E4EC(v3, v4, 0x10u);
  v18 = sub_26EB1C(v17);
  return sub_26725C(v18, HIDWORD(v18));
}
