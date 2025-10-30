int __fastcall sub_D5DA8(int a1, _DWORD *a2)
{
  unsigned __int8 *v4; // r5
  int *v5; // r0
  int *v6; // r8
  unsigned int v7; // r3
  int v8; // r5
  char *v9; // r6
  int v10; // r2
  _DWORD *v11; // r7
  unsigned int v12; // r6
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r5
  int v21; // t1
  _DWORD *v22; // r11
  _DWORD *v23; // r2
  void *v24; // r0
  bool v25; // zf
  _BYTE *v27; // [sp+4h] [bp-48h]
  void *ptr; // [sp+8h] [bp-44h] BYREF
  _BYTE v29[16]; // [sp+10h] [bp-3Ch] BYREF
  _DWORD v30[5]; // [sp+20h] [bp-2Ch] BYREF
  int v31; // [sp+34h] [bp-18h]
  int v32; // [sp+38h] [bp-14h]
  int v33; // [sp+3Ch] [bp-10h]
  int v34; // [sp+40h] [bp-Ch]
  int v35; // [sp+44h] [bp-8h]

  v4 = (unsigned __int8 *)sub_9360C(*a2 + 3);
  v27 = sub_93610(v4);
  ptr = v29;
  sub_CB204(&ptr, v4, (int)v27);
  v5 = (int *)off_489C00();
  v6 = v5;
  if ( !v5 || (v7 = *v5) == 0 )
    sub_946E0("No known static tracepoint marker named %s", (const char *)ptr);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v7 > 0x6666666 )
    sub_33D184("vector::reserve");
  v8 = 40 * v7;
  v9 = (char *)sub_9836C(40 * v7);
  if ( *(_DWORD *)a1 )
    sub_339E64(*(void **)a1);
  v10 = *v6;
  *(_DWORD *)(a1 + 8) = &v9[v8];
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = v9;
  if ( v10 )
  {
    v11 = v6 + 1;
    v12 = 0;
    do
    {
      v21 = v11[1];
      ++v11;
      v20 = v21;
      sub_21DEAC(v30, *(_DWORD *)(v21 + 4));
      v22 = *(_DWORD **)(a1 + 4);
      v23 = *(_DWORD **)(a1 + 8);
      v31 = *(_DWORD *)(v21 + 4);
      if ( v22 == v23 )
      {
        sub_DFC48(a1, v22, v30);
      }
      else
      {
        if ( v22 )
        {
          v13 = v30[1];
          v14 = v30[2];
          v15 = v30[3];
          *v22 = v30[0];
          v22[1] = v13;
          v22[2] = v14;
          v22[3] = v15;
          v16 = v31;
          v17 = v32;
          v18 = v33;
          v22[4] = v30[4];
          v22[5] = v16;
          v22[6] = v17;
          v22[7] = v18;
          v19 = v35;
          v22[8] = v34;
          v22[9] = v19;
        }
        *(_DWORD *)(a1 + 4) = v22 + 10;
      }
      sub_24D520(v20);
      ++v12;
    }
    while ( v12 < *v6 );
  }
  v24 = ptr;
  v25 = ptr == v29;
  *a2 = v27;
  if ( !v25 )
    sub_339E64(v24);
  return a1;
}
