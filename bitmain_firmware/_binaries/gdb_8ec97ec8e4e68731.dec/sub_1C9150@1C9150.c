int __fastcall sub_1C9150(unsigned __int8 *a1, int a2)
{
  int v3; // r8
  int v4; // r6
  _BYTE *v5; // r1
  int v6; // r3
  int v7; // r9
  int v8; // r7
  char v9; // r3
  int result; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  int v13; // r5
  int v14; // r0
  int v15; // r0
  int v16; // r7
  int v17; // r0
  __int64 v18; // r0
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  int v20; // [sp+10h] [bp-Ch] BYREF
  unsigned __int8 v21; // [sp+14h] [bp-8h]
  unsigned __int8 v22; // [sp+15h] [bp-7h]

  v3 = (unsigned __int8)byte_46DAA8;
  if ( byte_487CF8 )
    v4 = (unsigned __int8)byte_487CF8;
  else
    v4 = 120;
  v5 = a1;
  if ( a1 )
  {
    v6 = *a1;
    if ( v6 == 47 )
    {
      ptr = a1 + 1;
      sub_1C553C((char *)&v20, (const char **)&ptr, (unsigned __int8)byte_487CF8, (unsigned __int8)byte_46DAA8);
      v5 = ptr;
      v7 = v20;
      v4 = v21;
      v3 = v22;
      if ( !ptr )
        goto LABEL_9;
      v6 = *(unsigned __int8 *)ptr;
    }
    else
    {
      v7 = 1;
    }
    if ( !v6 )
    {
LABEL_9:
      v8 = dword_487CF0;
      goto LABEL_10;
    }
    sub_1C42A8((char **)&ptr, v5);
    if ( a2 )
      sub_2435A0("");
    v16 = sub_14CD3C((int *)ptr);
    if ( **(_BYTE **)(sub_26BC70(v16) + 24) == 18 || **(_BYTE **)(sub_26BC70(v16) + 24) == 19 )
      v16 = sub_26EA24(v16);
    if ( **(_BYTE **)(sub_26BC70(v16) + 24) == 7 && *(_DWORD *)nullsub_31(v16) == 1 )
      v17 = ((int (__fastcall *)(int))loc_26C09C)(v16);
    else
      v17 = sub_26EBA8(v16);
    dword_487CE4 = v17;
    v8 = *((_DWORD *)ptr + 1);
    dword_487CF0 = v8;
    free(ptr);
  }
  else
  {
    v8 = dword_487CF0;
    v7 = 1;
  }
LABEL_10:
  if ( !v8 )
    sub_51E9C("starting display address");
  ((void (__fastcall *)(int, int, int, int, int))loc_1C8208)(v7, v4, v3, v8, dword_487CE4);
  result = dword_487D04;
  if ( v4 == 115 )
    v9 = 98;
  else
    byte_46DAA8 = v3;
  if ( v4 == 115 )
    byte_46DAA8 = v9;
  byte_487CF8 = v4;
  if ( dword_487D04 )
  {
    v11 = (_DWORD *)sub_26BC70(dword_487D04);
    v12 = sub_1700C0(v11);
    v13 = sub_26CBF4("_");
    v14 = sub_26DC9C(v12, dword_487D00);
    ((void (__fastcall *)(int, int))loc_26F224)(v13, v14);
    if ( sub_26BF4C(dword_487D04) )
    {
      v18 = sub_26CBF4(&dword_3C439C);
      return sub_26CC14(v18, HIDWORD(v18));
    }
    else
    {
      v15 = sub_26CBF4(&dword_3C439C);
      return ((int (__fastcall *)(int, int))loc_26F224)(v15, dword_487D04);
    }
  }
  return result;
}
