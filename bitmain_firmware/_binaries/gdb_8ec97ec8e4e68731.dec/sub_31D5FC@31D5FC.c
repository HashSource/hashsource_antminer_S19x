int __fastcall sub_31D5FC(char *s1, int a2, void (__fastcall *a3)(_BYTE *), int a4)
{
  int v8; // r2
  bool v9; // zf
  int v10; // r3
  int v11; // r3
  bool v12; // zf
  int v13; // r9
  int v14; // r2
  int v15; // r10
  size_t v16; // r0
  _DWORD *v17; // r2
  int result; // r0
  _DWORD *v19; // r4
  _DWORD v20[2]; // [sp+0h] [bp-64h] BYREF
  _DWORD v21[3]; // [sp+8h] [bp-5Ch] BYREF
  char *s; // [sp+14h] [bp-50h]
  _DWORD *v23; // [sp+18h] [bp-4Ch]
  int v24; // [sp+1Ch] [bp-48h]
  int v25; // [sp+20h] [bp-44h]
  _DWORD *v26; // [sp+24h] [bp-40h]
  int v27; // [sp+28h] [bp-3Ch]
  size_t v28; // [sp+2Ch] [bp-38h]
  int v29; // [sp+30h] [bp-34h]
  int v30; // [sp+34h] [bp-30h]
  int v31; // [sp+38h] [bp-2Ch]
  int v32; // [sp+3Ch] [bp-28h]

  if ( *s1 == 95 && s1[1] == 90 )
  {
    v13 = 1;
  }
  else
  {
    if ( strncmp(s1, "_GLOBAL_", 8u) )
      goto LABEL_32;
    v8 = (unsigned __int8)s1[8];
    v9 = v8 == 95;
    if ( v8 != 95 )
      v9 = v8 == 46;
    v10 = v9;
    if ( v8 == 36 )
      v10 |= 1u;
    if ( !v10 )
      goto LABEL_32;
    v11 = (unsigned __int8)s1[9];
    v12 = v11 == 73;
    if ( v11 != 73 )
      v12 = v11 == 68;
    if ( v12 && s1[10] == 95 )
    {
      if ( v11 == 73 )
        v13 = 2;
      else
        v13 = 3;
    }
    else
    {
LABEL_32:
      result = a2 & 0x10;
      if ( (a2 & 0x10) == 0 )
        return result;
      v13 = 0;
    }
  }
  v28 = strlen(s1);
  v21[0] = s1;
  v21[2] = a2;
  s = s1;
  v23 = v20;
  v26 = v20;
  v25 = 2 * v28;
  v21[1] = &s1[v28];
  v24 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( v13 == 1 )
  {
    v19 = (_DWORD *)sub_31CFBC(v21, 1);
LABEL_36:
    if ( (a2 & 1) != 0 )
      goto LABEL_37;
    return v19 && sub_31D4F0(a2, v19, a3, a4);
  }
  if ( !v13 )
  {
    v19 = sub_319DD0((int)v21);
    goto LABEL_36;
  }
  v14 = (unsigned __int8)s1[11];
  if ( v13 == 2 )
    v15 = 67;
  else
    v15 = 68;
  s = s1 + 11;
  if ( v14 == 95 && s1[12] == 90 )
  {
    s = s1 + 13;
    v17 = (_DWORD *)sub_31C864((int)v21, 0);
  }
  else
  {
    v20[1] = s1 + 11;
    v16 = strlen(s1 + 11);
    v17 = sub_314104(v21, (int)(s1 + 11), v16);
  }
  v19 = (_DWORD *)sub_313728(v21, v15, (unsigned int)v17);
  s += strlen(s);
  if ( (a2 & 1) != 0 )
  {
LABEL_37:
    if ( *s )
      return 0;
  }
  return v19 && sub_31D4F0(a2, v19, a3, a4);
}
