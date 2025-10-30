unsigned int __fastcall sub_25E07C(int a1, int a2)
{
  int v3; // r6
  int v4; // r9
  _DWORD *v5; // r0
  int v6; // r7
  _DWORD *v7; // r0
  int v8; // r8
  int v9; // r10
  _BOOL4 v10; // r4
  _BOOL4 v11; // r5
  void *v12; // r1
  void *v13; // r2
  void *v14; // r2
  _BOOL4 v15; // r4
  int v17; // r0
  __int64 v18; // r0
  bool v20; // zf
  unsigned int v21; // r3
  bool v22; // cf
  int v24; // r4
  int v25; // r4
  unsigned int v26; // r4
  unsigned __int8 *v27; // r5
  unsigned __int8 *v28; // r0
  int v29; // r2
  int v30; // t1
  int v31; // t1
  int v32; // [sp+Ch] [bp-28h]
  int v33; // [sp+10h] [bp-24h] BYREF
  int v34; // [sp+14h] [bp-20h] BYREF
  void *v35[3]; // [sp+18h] [bp-1Ch] BYREF
  void *ptr; // [sp+24h] [bp-10h] BYREF
  int v37; // [sp+28h] [bp-Ch]
  int v38; // [sp+2Ch] [bp-8h]

  v3 = sub_26EAAC(a1);
  v4 = sub_26EAAC(a2);
  v5 = (_DWORD *)sub_26BC70(v3);
  v6 = sub_171258(v5);
  v7 = (_DWORD *)sub_26BC70(v4);
  v8 = sub_171258(v7);
  v9 = **(char **)(v6 + 24);
  v32 = **(char **)(v8 + 24);
  v10 = sub_1736DC((_DWORD *)v6) != 0;
  v11 = sub_1736DC((_DWORD *)v8) != 0;
  if ( v10 && v11 )
  {
    v17 = sub_25E4EC(v3, v4, 14);
    v18 = sub_26EB1C(v17);
    return sub_26725C(v18, HIDWORD(v18));
  }
  else
  {
    if ( v10 | (unsigned __int8)sub_26E9E0(v3) )
    {
      if ( v11 | (unsigned __int8)sub_26E9E0(v4) )
      {
        v12 = *(void **)(v8 + 20);
        v13 = *(void **)(v6 + 20);
        v35[0] = (void *)(v10 && v11);
        v35[1] = (void *)(v10 && v11);
        v35[2] = (void *)(v10 && v11);
        if ( v12 < v13 )
          v12 = v13;
        ptr = (void *)(v10 && v11);
        v37 = v10 && v11;
        v38 = v10 && v11;
        if ( v12 )
        {
          sub_AF660((char **)v35, (unsigned int)v12);
          v21 = *(_DWORD *)(v8 + 20);
          v12 = ptr;
          if ( v21 < *(_DWORD *)(v6 + 20) )
            v21 = *(_DWORD *)(v6 + 20);
          v14 = (void *)(v37 - (_DWORD)ptr);
          v22 = v21 >= v37 - (int)ptr;
          if ( v21 > v37 - (int)ptr )
          {
            sub_AF660((char **)&ptr, v21 - (_DWORD)v14);
            v14 = v35[0];
            v12 = ptr;
          }
          else
          {
            if ( v21 >= (unsigned int)v14 )
              v14 = v35[0];
            else
              v21 += (unsigned int)ptr;
            if ( !v22 )
            {
              v14 = v35[0];
              v37 = v21;
            }
          }
        }
        else
        {
          v14 = 0;
        }
        sub_25C7F4(v3, v4, v14, &v33, v12, &v34);
        v15 = ((int (__fastcall *)(void *, int, void *, int))loc_252C74)(v35[0], v33, ptr, v34) == 0;
        if ( ptr )
          sub_339E64(ptr);
        if ( v35[0] )
          sub_339E64(v35[0]);
        return v15;
      }
      if ( v32 == 1 && v10 )
      {
        v24 = sub_26EB1C(v3);
        return sub_26EBA8(v4) == v24;
      }
    }
    else if ( v9 == 1 && v11 )
    {
      v25 = sub_26EBA8(v3);
      return v25 == sub_26EB1C(v4);
    }
    if ( v9 == v32 )
    {
      v26 = *(_DWORD *)(v6 + 20);
      if ( v26 == *(_DWORD *)(v8 + 20) )
      {
        v27 = (unsigned __int8 *)sub_26E978(v3);
        v28 = (unsigned __int8 *)sub_26E978(v4);
        do
        {
          if ( (--v26 & 0x80000000) != 0 )
            break;
          v30 = *v27++;
          v29 = v30;
          v31 = *v28++;
        }
        while ( v29 == v31 );
        return v26 >> 31;
      }
    }
    v20 = v9 == 13;
    if ( v9 == 13 )
      v20 = v32 == 13;
    if ( !v20 )
      sub_946E0("Invalid type combination in equality test.");
    return sub_25C748(v3, v4) == 0;
  }
}
