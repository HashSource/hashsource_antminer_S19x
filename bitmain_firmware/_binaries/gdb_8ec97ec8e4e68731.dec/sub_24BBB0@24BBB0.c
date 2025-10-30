int __fastcall sub_24BBB0(const char *a1, int a2)
{
  const char *v2; // r5
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r7
  int v7; // r8
  int v8; // r2
  void *v9; // r3
  int v10; // r3
  int v12; // r2
  int v13; // r3
  unsigned int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  const char *v18; // r0
  int v19; // r0
  int v20; // r0
  unsigned int v21; // r7
  int v22; // r8
  int *v23; // r0
  int v24; // r7
  const char *v25; // r0
  void *v26; // [sp+20h] [bp-3Ch] BYREF
  void *ptr[3]; // [sp+24h] [bp-38h] BYREF
  int v28; // [sp+30h] [bp-2Ch] BYREF
  int v29; // [sp+34h] [bp-28h]
  int v30; // [sp+38h] [bp-24h]
  int v31; // [sp+3Ch] [bp-20h]
  int v32; // [sp+40h] [bp-1Ch]
  unsigned int v33; // [sp+44h] [bp-18h]
  int v34; // [sp+48h] [bp-14h]
  int v35; // [sp+4Ch] [bp-10h]
  int v36; // [sp+50h] [bp-Ch]
  int v37; // [sp+54h] [bp-8h]

  v2 = a1;
  if ( dword_48A8D0 )
    a1 = (const char *)sub_248B08(&dword_48A8C8);
  if ( v2 && *v2 )
  {
    sub_19B9EC(ptr, v2, 1u);
    v6 = *((_DWORD *)ptr[0] + 1);
    v12 = *((_DWORD *)ptr[0] + 2);
    v13 = *((_DWORD *)ptr[0] + 3);
    v7 = *((_DWORD *)ptr[0] + 4);
    v28 = *(_DWORD *)ptr[0];
    v29 = v6;
    v30 = v12;
    v31 = v13;
    v14 = *((_DWORD *)ptr[0] + 5);
    v15 = *((_DWORD *)ptr[0] + 6);
    v16 = *((_DWORD *)ptr[0] + 7);
    v32 = *((_DWORD *)ptr[0] + 4);
    v33 = v14;
    v34 = v15;
    v35 = v16;
    v17 = *((_DWORD *)ptr[0] + 9);
    v36 = *((_DWORD *)ptr[0] + 8);
    v37 = v17;
    sub_339E64(ptr[0]);
  }
  else
  {
    v4 = sub_15F70C((int)a1);
    v5 = sub_15DDFC(v4);
    sub_21DEAC((int)&v28, v5);
    v6 = v29;
    v7 = v32;
  }
  if ( !v6 )
    sub_946E0("No line number information available.");
  if ( v7 <= 0 || (v32 = v7, v29 = v6, !sub_21E5C4(v28, v6, v30, v31, v7, v33, v34, v35, v36, v37, &v26, ptr)) )
  {
    v25 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v6);
    sub_946E0("Line number %d is out of range for \"%s\".", v7, v25);
  }
  v8 = (int)v26;
  v9 = ptr[0];
  if ( v26 == ptr[0] )
  {
    v18 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v6);
    sub_259F10("Line %d of \"%s\"", v7, v18);
    sub_259B58("  ");
    v19 = sub_259F10(" is at address ");
    v20 = sub_B894C(v19);
    v21 = (unsigned int)v26;
    v22 = v20;
    v23 = (int *)sub_242F8C();
    sub_1C7360(v22, v21, *v23);
    sub_259B58("  ");
    sub_259F10(" but contains no code.\n");
    sub_21DEAC((int)&v28, (unsigned int)v26);
    v24 = v32;
    if ( v32 <= 0 || !sub_21E5C4(v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, &v26, ptr) || v26 == ptr[0] )
      sub_946E0("Cannot find a good line.");
    sub_259F10("Attempting to find line %d instead.\n", v24);
    v8 = (int)v26;
    v9 = ptr[0];
  }
  v10 = (int)v9 - 1;
  if ( v2 && *v2 )
    return sub_24B678(3, 0, v8, v10, a2);
  else
    return sub_24B678(4, 0, v8, v10, a2);
}
