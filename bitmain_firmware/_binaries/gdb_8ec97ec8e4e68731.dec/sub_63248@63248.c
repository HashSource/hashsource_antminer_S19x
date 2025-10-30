int __fastcall sub_63248(int a1, int a2)
{
  int v4; // r5
  int v5; // r8
  int v6; // r7
  int v7; // r9
  int v8; // r0
  int v9; // r0
  void *ptr; // [sp+Ch] [bp-6Ch] BYREF
  _DWORD v12[3]; // [sp+10h] [bp-68h] BYREF
  char v13; // [sp+1Ch] [bp-5Ch] BYREF
  _BYTE v14[52]; // [sp+2Ch] [bp-4Ch] BYREF
  int v15; // [sp+60h] [bp-18h]

  v4 = *(_DWORD *)sub_242FDC(a1);
  sub_256760(v12);
  v12[1] = &v13;
  v12[0] = &off_3F2924;
  v12[2] = 0;
  v13 = 0;
  sub_1C42A8(&ptr, a1);
  if ( a2 == 2 )
  {
    v5 = sub_14CD64(ptr);
  }
  else
  {
    v5 = sub_14CD3C(ptr);
    if ( !a2 )
    {
      v6 = 0;
      v7 = 0;
      goto LABEL_4;
    }
  }
  sub_2578AC(v4, 0);
  v6 = 1;
  v7 = v4;
LABEL_4:
  sub_2575E8(v4, "name", a1);
  if ( a2 == 1 )
  {
    sub_266608(v14);
    v15 = 1;
    sub_266BC4(v5, v12, 0, v14, off_46D5A4[0]);
    sub_25765C(v4, "value", v12);
    if ( !v6 )
      goto LABEL_8;
    goto LABEL_14;
  }
  if ( a2 == 2 )
  {
    v8 = sub_26BC70(v5);
    sub_171258(v8);
    v9 = sub_26BC70(v5);
    sub_255DB0(v9, "", v12, -1);
  }
  if ( v6 )
LABEL_14:
    sub_25734C(v7, 0);
LABEL_8:
  if ( ptr )
    free(ptr);
  return sub_256478(v12);
}
