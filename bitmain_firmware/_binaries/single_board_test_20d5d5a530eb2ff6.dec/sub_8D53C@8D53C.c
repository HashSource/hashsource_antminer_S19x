int __fastcall sub_8D53C(int *a1, int a2)
{
  int v2; // r3
  int v5; // r5
  int (__fastcall *v7)(int *, const void *, size_t *); // r7
  int v8; // r3
  size_t v9; // r9
  size_t v10; // r2
  size_t v11; // [sp+Ch] [bp-8h] BYREF

  v2 = *a1;
  if ( *a1 > 772 )
  {
    if ( v2 == 65277 || v2 == 65279 )
      goto LABEL_4;
LABEL_14:
    sub_95494(a1, 80, 547, 259, "ssl/ssl_sess.c", 298);
    return 0;
  }
  if ( v2 < 768 && v2 != 256 )
    goto LABEL_14;
LABEL_4:
  v5 = a1[343];
  *(_DWORD *)(a2 + 328) = 32;
  if ( v5 )
  {
    v5 = 1;
    *(_DWORD *)(a2 + 328) = 0;
    return v5;
  }
  sub_10C544(a1[986]);
  sub_10C544(*(_DWORD *)(a1[376] + 536));
  v7 = (int (__fastcall *)(int *, const void *, size_t *))a1[289];
  v8 = a1[376];
  if ( !v7 )
  {
    v7 = *(int (__fastcall **)(int *, const void *, size_t *))(v8 + 252);
    if ( !v7 )
      v7 = sub_8D414;
  }
  sub_10C564(*(_DWORD *)(v8 + 536));
  sub_10C564(a1[986]);
  v9 = *(_DWORD *)(a2 + 328);
  memset((void *)(a2 + 332), 0, v9);
  v11 = v9;
  if ( !v7(a1, (const void *)(a2 + 332), &v11) )
  {
    v5 = 0;
    sub_95494(a1, 80, 547, 301, "ssl/ssl_sess.c", 337);
    return v5;
  }
  v10 = v11;
  if ( v11 && v11 <= *(_DWORD *)(a2 + 328) )
  {
    *(_DWORD *)(a2 + 328) = v11;
    if ( !sub_87B34(a1, (const void *)(a2 + 332), v10) )
      return 1;
    sub_95494(a1, 80, 547, 302, "ssl/ssl_sess.c", 355);
    return v5;
  }
  sub_95494(a1, 80, 547, 303, "ssl/ssl_sess.c", 347);
  return 0;
}
