int __fastcall sub_154E3C(int *a1, int *a2, int a3, int a4, char a5, int a6, unsigned __int8 a7)
{
  int result; // r0
  _DWORD *v11; // r0
  size_t v12; // r0
  char *v13; // r9
  int v14[3]; // [sp+0h] [bp-210h] BYREF
  int v15[68]; // [sp+100h] [bp-110h] BYREF
  char *s; // [sp+210h] [bp+0h]
  int *v17; // [sp+218h] [bp+8h]
  _BYTE v19[56]; // [sp+224h] [bp+14h] BYREF
  char v20[120]; // [sp+25Ch] [bp+4Ch] BYREF

  result = sub_151E50(v15, a2);
  if ( result == -1 )
  {
    result = sub_151E50(v14, a1);
    if ( result == -1 )
    {
      v17 = (int *)sub_D14F4();
      if ( v17
        && (s = v20,
            v19[1] = a7,
            v19[0] = a5 != 0,
            strcpy(v20, "SigEd448"),
            v11 = (_DWORD *)sub_15E674(),
            sub_D1520(v17, v11, 0))
        && (v12 = strlen(s), sub_D16D8((int)v17, (int)s, v12))
        && sub_D16D8((int)v17, (int)v19, 2)
        && sub_D16D8((int)v17, a6, a7)
        && sub_D16D8((int)v17, (int)a1, 57)
        && sub_D16D8((int)v17, (int)a2, 57)
        && sub_D16D8((int)v17, a3, a4)
        && sub_D1748(v17, (int)s, 114) )
      {
        sub_D1504(v17);
        v13 = s;
        sub_157850(v19, s);
        sub_E07F8(v13, 0x72u);
        sub_156CC4(v19, &curve448_scalar_zero, v19);
        sub_157850(v13, (char *)a1 + 57);
        sub_153EE0((unsigned int)v15, (unsigned int)v13, v15, (unsigned int)v19);
        return sub_151760((int)v15, (int)v14);
      }
      else
      {
        sub_D1504(v17);
        return 0;
      }
    }
  }
  return result;
}
