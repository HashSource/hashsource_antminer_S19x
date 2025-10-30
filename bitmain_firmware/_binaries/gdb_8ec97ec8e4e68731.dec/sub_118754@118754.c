int __fastcall sub_118754(_DWORD *a1, int a2, _DWORD *a3, int *a4)
{
  int v5; // r5
  int *v7; // r4
  int v8; // r0
  int v9; // r2
  int v10; // r4
  int v11; // r4
  _DWORD *v13; // r12
  _DWORD *v14; // r7
  int v15; // r4
  int v16; // r3
  int v17; // r0
  int v18; // r4
  int v19; // r5
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r1
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r3
  int v32; // r4
  int v33; // r0
  int v34; // r0
  _DWORD *v35; // [sp+14h] [bp-60h]
  int (**v36)(); // [sp+18h] [bp-5Ch] BYREF
  void *v37; // [sp+1Ch] [bp-58h]
  int v38; // [sp+28h] [bp-4Ch]
  int v39; // [sp+2Ch] [bp-48h]
  int v40; // [sp+30h] [bp-44h]
  int v41; // [sp+34h] [bp-40h]
  unsigned int v42; // [sp+40h] [bp-34h]
  int v43; // [sp+48h] [bp-2Ch]
  int v44; // [sp+50h] [bp-24h]
  void *ptr; // [sp+58h] [bp-1Ch]
  int v46; // [sp+64h] [bp-10h]
  int v47; // [sp+68h] [bp-Ch]
  int v48; // [sp+6Ch] [bp-8h]

  if ( !a1 )
    return 0;
  v5 = a2;
  if ( !a2 )
  {
    v35 = a3;
    v27 = sub_15D504(a1);
    a3 = v35;
    if ( v27 )
    {
      v28 = sub_15F7E8(0);
      a3 = v35;
      v5 = v28;
    }
  }
  switch ( *a1 )
  {
    case 1:
      *a4 = a1[2];
      return 1;
    case 2:
      v13 = (_DWORD *)a1[2];
      if ( !a3 )
        goto LABEL_14;
      while ( *a3 != *v13 )
      {
        a3 = (_DWORD *)a3[3];
        if ( !a3 )
LABEL_14:
          sub_946E0("cannot find reference address for offset property");
      }
      v23 = a3[1];
      v24 = v13[4];
      v25 = v13[2];
      if ( v23 )
        v26 = sub_26DCD8(v24, v23 + v25);
      else
        v26 = sub_260F7C(v24, v25 + a3[2]);
      *a4 = sub_26EBA8(v26);
      return 1;
    case 3:
      v14 = (_DWORD *)a1[2];
      if ( a3 )
        v15 = a3[2];
      else
        v15 = 0;
      if ( v14 == (_DWORD *)-8 || !v14[3] )
        return 0;
      sub_112384((int)&v36);
      v16 = v14[4];
      v46 = v5;
      v48 = v15;
      v47 = v16;
      v36 = &off_39D3D4;
      v17 = sub_1322B4(v16);
      v38 = sub_1B7250(v17);
      v39 = sub_1322C8(v14[4]);
      v40 = sub_132338(v14[4]);
      v41 = sub_132388(v14[4]);
      ((void (__fastcall *)(int (***)(), _DWORD, _DWORD))loc_114908)(&v36, v14[2], v14[3]);
      if ( v42 <= 2 )
      {
        v30 = sub_11244C((int)&v36, 0);
        v31 = v42;
        v32 = v30;
        *a4 = v30;
        if ( v31 == 1 )
        {
          v33 = sub_15ECB4(v46);
          v34 = sub_117648(v33, v32);
          v21 = sub_15C03C(v34, v46);
          goto LABEL_23;
        }
        v11 = 1;
      }
      else
      {
        if ( v42 == 3 )
        {
          v18 = v44;
          v19 = v43;
          v20 = ((int (__fastcall *)(int))loc_165BB8)(v38);
          v21 = sub_15C190(v18, v19, v20);
LABEL_23:
          v11 = 1;
          *a4 = v21;
          goto LABEL_24;
        }
        v11 = 0;
      }
LABEL_24:
      v36 = (int (**)())&unk_39C084;
      if ( ptr )
        sub_339E64(ptr);
      if ( v37 )
        sub_339E64(v37);
      if ( !v11 )
        return 0;
      if ( *v14 )
      {
        v22 = sub_260F7C(*v14, *a4);
        *a4 = sub_26EBA8(v22);
      }
      break;
    case 4:
      v7 = (int *)a1[2];
      v8 = sub_15DE14(v5);
      v9 = ((int (__fastcall *)(int *, int (***)(), int))loc_115880)(v7 + 2, &v36, v8);
      if ( !v9 )
        return 0;
      v10 = sub_117684(*v7, v5, v9, (int)v36, v7[5], 0, 0);
      if ( sub_26ED18() )
        return 0;
      v29 = v10;
      v11 = 1;
      *a4 = sub_26EBA8(v29);
      return v11;
    default:
      return 0;
  }
  return v11;
}
