int __fastcall sub_189C68(int result, int a2, _DWORD *a3)
{
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r0
  int v6; // r7
  unsigned int v7; // r5
  _DWORD v8[2]; // [sp+4h] [bp-2Ch] BYREF
  _DWORD *v9; // [sp+Ch] [bp-24h] BYREF
  int v10; // [sp+10h] [bp-20h]
  int v11; // [sp+14h] [bp-1Ch]

  if ( a2 == 1 && *a3 == 5 && dword_48794C != 1 )
  {
    v3 = (_DWORD *)result;
    result = off_4899F8(&dword_4899A0);
    if ( !result )
    {
      v4 = sub_1DDB40(v3[2], v3[3], v3[4]);
      v5 = sub_1DD58C(v4);
      result = ((int (__fastcall *)(int))loc_169660)(v5);
      if ( result )
      {
        v6 = *(_DWORD *)(v4 + 4);
        v7 = sub_1DFB3C(v4) - result;
        if ( sub_CF724(v6, v7) || (result = sub_232950(0)) != 0 && (result = sub_CF584(v6, v7)) != 0 )
        {
          v10 = 0;
          v9 = 0;
          v11 = 0;
          if ( sub_1DC2B8() )
          {
            sub_1DC96C(v8);
            if ( (_BYTE)v11 )
              ((void (__fastcall *)(_DWORD **))loc_1907A0)(&v9);
            LOBYTE(v11) = 1;
            v9 = (_DWORD *)v8[0];
            v10 = v8[1];
          }
          if ( sub_23DD7C(v3) || (result = sub_184CAC(v3)) == 0 || v3[47] && v7 == v3[46] )
            result = sub_1DFC60(v4, v7);
          if ( (_BYTE)v11 )
          {
            if ( v9 )
              *v9 = v10;
          }
        }
      }
    }
  }
  return result;
}
