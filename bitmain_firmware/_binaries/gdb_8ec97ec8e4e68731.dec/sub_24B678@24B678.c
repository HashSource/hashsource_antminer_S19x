int __fastcall sub_24B678(int a1, int a2, int a3, int a4, int a5)
{
  int *v7; // r0
  int v8; // r11
  _BOOL4 v9; // r1
  int v10; // r8
  _DWORD *v11; // r6
  int v12; // r0
  bool v13; // zf
  int v14; // r6
  int v15; // r0
  int v16; // r0
  int result; // r0
  int v18; // r0
  unsigned int v19; // r4
  int *v20; // r0
  bool v21; // zf
  const char *v22; // r0
  _BOOL4 v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // [sp+20h] [bp-2Ch] BYREF
  int v27; // [sp+24h] [bp-28h]
  int v28; // [sp+28h] [bp-24h]
  int v29; // [sp+2Ch] [bp-20h]
  int v30; // [sp+30h] [bp-1Ch]
  int v31[3]; // [sp+34h] [bp-18h] BYREF
  unsigned __int8 v32; // [sp+40h] [bp-Ch]
  int v33; // [sp+44h] [bp-8h]

  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v7 = (int *)sub_242FDC();
  v8 = *v7;
  v9 = a2 != -1;
  if ( a1 )
    v9 = 1;
  if ( v9 )
  {
    v23 = sub_15D504((int)v7);
    if ( v23 || dword_48A8BC >= 0 )
    {
      v24 = sub_15F70C(v23);
      ((void (__fastcall *)(int *, int))loc_15CFA0)(&v26, v24);
    }
    v25 = off_489BC0(&dword_4899A0, a1);
    v10 = v25;
    if ( (a1 || a2 != -1) && v25 == -1 )
    {
      if ( a5 )
        sub_946E0("Target failed to find requested trace frame.");
      if ( dword_48A514 )
        sub_259F10("End of trace buffer.\n");
    }
  }
  else
  {
    v10 = off_489BC0(&dword_4899A0, 0);
  }
  v11 = sub_D194C(-1);
  sub_15D778();
  v12 = (int)sub_234884();
  v13 = v11 == 0;
  if ( v11 )
    v12 = v11[6];
  LOWORD(v14) = (unsigned __int16)&dword_48A8A8;
  if ( v13 )
    v12 = -1;
  HIWORD(v14) = (unsigned int)&dword_48A8A8 >> 16;
  sub_247A50(v12);
  if ( *(_DWORD *)(v14 + 0x14) != v10 )
    sub_1B9E0C(v10, *(_DWORD *)(v14 + 0x18));
  sub_24B5BC(v10);
  if ( v10 == -1 )
  {
    sub_247A80(0);
  }
  else
  {
    v16 = sub_15F70C(v15);
    sub_247A80(v16);
  }
  if ( *(int *)(v14 + 0x14) < 0 )
  {
    if ( sub_2573F0(v8) )
    {
      result = sub_2575E8(v8, "found", "0");
    }
    else
    {
      v21 = a1 == 0;
      if ( !a1 )
        v21 = a2 == -1;
      if ( v21 )
        LOWORD(v22) = -2336;
      else
        LOWORD(v22) = -2296;
      HIWORD(v22) = 62;
      result = sub_259858(v22);
    }
  }
  else
  {
    if ( sub_2573F0(v8) )
    {
      sub_2575E8(v8, "found", "1");
      sub_257504(v8, "tracepoint", *(_DWORD *)(v14 + 0x18));
      result = sub_257504(v8, "traceframe", *(_DWORD *)(v14 + 0x14));
      if ( !a5 )
        return result;
      goto LABEL_19;
    }
    result = sub_259858("Found trace frame %d, tracepoint %d\n", *(_DWORD *)(v14 + 0x14), *(_DWORD *)(v14 + 0x18));
  }
  if ( !a5 )
    return result;
LABEL_19:
  result = sub_15D504(result);
  if ( result || *(int *)(v14 + 0x14) >= 0 )
  {
    v18 = sub_15F70C(result);
    ((void (__fastcall *)(int *, int))loc_15CFA0)(v31, v18);
    if ( sub_15D0C4(v26, v27, v28, v29, v30, v31[0], v31[1], v31[2], v32, v33) )
      v19 = -1;
    else
      v19 = 1;
    v20 = (int *)sub_15F7E8(0);
    sub_20E7E8(v20, 1, v19, 1);
    return sub_1C8F1C();
  }
  return result;
}
