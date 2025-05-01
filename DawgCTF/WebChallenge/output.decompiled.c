export memory memory(initial: 258, max: 258);

global g_a:int = 65536;
global g_b:int = 0;
global g_c:int = 0;
global g_d:int = 0;

export table indirect_function_table:funcref(min: 6, max: 6);

data d_jrg73F2uAmv5YXS_wDEGOehzlW8q(offset: 65536) =
  "jrg/!7%[3=F,|2uAmv5\Y)X~]S_wD'*E"GOehz>l@W8q`4cCV;fQ6&0^R+toB#(dp1K$bH"
  "N:<PLnUTyZi }?ka.9IJ-{Mxs\00\1cU\1b\02/M\0a[F"\1a\08\19/-I\08\1a\0a8"\"
  "\1a-\19\19\08\<J\14\1a)\08<\1c\080\19R-+   0X0x\00-0X+0X 0X-0x+0x 0x\00"
  "nan\00inf\00NAN\00INF\00.\00(null)\00SUFFAH WEBDEVS!!!!!!!!\0a\00\00\00"
  "\00\00\00\00\00\00\00\00\19\00\0b\00\19\19\19\00\00\00\00\05\00\00\00\00"
  "\00\00\09\00\00\00\00\0b\00\00\00\00\00\00\00\00\19\00\0a\0a\19\19\19\03"
  "\0a\07\00\01\00\09\0b\18\00\00\09\06\0b\00\00\0b\00\06\19\00\00\00\19\19"
  "\19\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\0e\00\00\00\00\00\00"
  "\00\00\19\00\0b\0d\19\19\19\00\0d\00\00\02\00\09\0e\00\00\00\09\00\0e\00"
  "\00\0e\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\0c\00\00\00\00\00\00\00\00\00\00\00\13\00\00\00\00\13\00\00\00"
  "\00\09\0c\00\00\00\00\00\0c\00\00\0c\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\10\00\00\00\00\00\00\00\00\00\00"
  "\00\0f\00\00\00\04\0f\00\00\00\00\09\10\00\00\00\00\00\10\00\00\10\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\12"
  "\00\00\00\00\00\00\00\00\00\00\00\11\00\00\00\00\11\00\00\00\00\09\12\00"
  "\00\00\00\00\12\00\00\12\00\00\1a\00\00\00\1a\1a\1a\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\1a\00\00\00\1a\1a"
  "\1a\00\00\00\00\00\00\09\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\14\00\00\00\00"
  "\00\00\00\00\00\00\00\17\00\00\00\00\17\00\00\00\00\09\14\00\00\00\00\00"
  "\14\00\00\14\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\16\00\00\00\00\00\00\00\00\00\00\00\15\00\00\00\00\15\00"
  "\00\00\00\09\16\00\00\00\00\00\16\00\00\16\00\000123456789ABCDEF";
data d_b(offset: 66240) =
  "\05\00\00\00\00\00\00\00\00\00\00\00\01\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\02\00\00\00\03\00\00\00h\03\01\00"
  "\00\04\00\00\00\00\00\00\00\00\00\00\01\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\ff\ff\ff\ff\0a\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\c0\02\01\000\0a\01\00";

import function wasi_snapshot_preview1_fd_write(a:int, b:int, c:int, d:int):int;

import function env_emscripten_memcpy_js(a:int, b:int, c:int);

import function env_emscripten_resize_heap(a:int):int;

export function wasm_call_ctors() {
  emscripten_stack_init();
  f_pa();
}

function f_e():int {
  var a:int = g_a;
  var b:int = 16;
  var c:int_ptr = a - b;
  g_a = c;
  var d:int = 0;
  c[3] = d;
  var e:int = 41;
  var f:int = f_ua(e);
  c[2] = f;
  var g:byte_ptr = c[2];
  var h:int = 0;
  g[41] = h;
  var i:int = 0;
  c[1] = i;
  loop L_b {
    var j:int = c[1];
    var k:int = 40;
    var l:int = j < k;
    var m:int = 1;
    var n:int = l & m;
    if (eqz(n)) goto B_a;
    var o:ubyte_ptr = c[1];
    var p:int = o[65632];
    var q:int = 255;
    var r:ubyte_ptr = p & q;
    var s:int = r[65536];
    var t:int = c[2];
    var u:int = c[1];
    var v:byte_ptr = t + u;
    v[0] = s;
    var w:int = c[1];
    var x:int = 1;
    var y:int = w + x;
    c[1] = y;
    continue L_b;
  }
  unreachable;
  label B_a:
  var z:int = 65726;
  var aa:int = 0;
  f_g(z, aa);
  var ba:int = c[3];
  var ca:int = 16;
  var da:int = c + ca;
  g_a = da;
  return ba;
}

export function main(a:int, b:int):int {
  var c:int = f_e();
  return c;
}

function f_g(a:int, b:int):int {
  var c:int_ptr = g_a - 16;
  g_a = c;
  c[3] = b;
  b = f_ha(66240, a, b);
  g_a = c + 16;
  return b;
}

function f_h(a:int, b:int, c:int):int {
  var e:{ a:int, b:int }
  var i:int;
  var j:int;
  var d:int_ptr = g_a - 32;
  g_a = d;
  d[4] = (e = a[7]:int);
  var f:{ a:int, b:int } = a[5]:int;
  d[7] = c;
  d[6] = b;
  d[5] = (b = f - e);
  var g:int = b + c;
  e = d + 16;
  var h:int = 2;
  if (
    eqz(
      f_la(wasi_snapshot_preview1_fd_write(a[15]:int, d + 16, 2, d + 12)))) goto B_e;
  f = e;
  goto B_d;
  label B_e:
  loop L_f {
    if (g == (b = d[3])) goto B_c;
    if (b > -1) goto B_g;
    f = e;
    goto B_b;
    label B_g:
    f = e + ((j = b > (i = e.b)) << 3);
    f.a = f.a + (i = b - select_if(i, 0, j));
    e = e + select_if(12, 4, j);
    e.a = e.a - i;
    g = g - b;
    e = f;
    if (
      eqz(
        f_la(wasi_snapshot_preview1_fd_write(a[15]:int, f, h = h - j, d + 12)))) continue L_f;
  }
  label B_d:
  if (g != -1) goto B_b;
  label B_c:
  a[7]:int = (b = a[11]:int);
  a[5]:int = b;
  a[4]:int = b + a[12]:int;
  b = c;
  goto B_a;
  label B_b:
  b = 0;
  a[7]:int = 0;
  a[2]:long = 0L;
  a[0]:int = a[0]:int | 32;
  if (h == 2) goto B_a;
  b = c - f.b;
  label B_a:
  g_a = d + 32;
  return b;
}

function f_i(a:int):int {
  return 0
}

function f_j(a:int, b:long, c:int):long {
  return 0L
}

function f_k(a:{ a:byte, b:byte, c:byte, d:byte }, b:{ a:long, b:long, c:long, d:long }, c:int):int {
  var e:int;
  var f:int;
  if (eqz(c)) goto B_a;
  a.a = b;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int } = a + c;
  (d + -1)[0]:byte = b;
  if (c < 3) goto B_a;
  a.c = b;
  a.b = b;
  (d + -3)[0]:byte = b;
  (d + -2)[0]:byte = b;
  if (c < 7) goto B_a;
  a.d = b;
  (d + -4)[0]:byte = b;
  if (c < 9) goto B_a;
  d = a + (e = 0 - a & 3);
  d.a = (b = (b & 255) * 16843009);
  c = d + (e = c - e & -4);
  (c + -4)[0]:int = b;
  if (e < 9) goto B_a;
  d.c = b;
  d.b = b;
  (c + -8)[0]:int = b;
  (c + -12)[0]:int = b;
  if (e < 25) goto B_a;
  d.g = b;
  d.f = b;
  d.e = b;
  d.d = b;
  (c + -16)[0]:int = b;
  (c + -20)[0]:int = b;
  (c + -24)[0]:int = b;
  (c + -28)[0]:int = b;
  c = e - (f = (d & 4) | 24);
  if (c < 32) goto B_a;
  var g:long = i64_extend_i32_u(b) * 4294967297L;
  b = d + f;
  loop L_b {
    b.d = g;
    b.c = g;
    b.b = g;
    b.a = g;
    b = b + 32;
    c = c + -32;
    if (c > 31) continue L_b;
  }
  label B_a:
  return a;
}

function f_l(a:int):int {
  return 1
}

function f_m(a:int) {
}

function f_n(a:int) {
}

function f_o(a:int) {
}

function f_p():int {
  f_n(67432);
  return 67436;
}

function f_q() {
  f_o(67432)
}

function f_r(a:int):int {
  var b:int;
  a[18]:int = (b = a[18]:int) + -1 | b;
  b = a[0]:int;
  if (eqz(b & 8)) goto B_a;
  a[0]:int = b | 32;
  return -1;
  label B_a:
  a[1]:long@4 = 0L;
  a[7]:int = (b = a[11]:int);
  a[5]:int = b;
  a[4]:int = b + a[12]:int;
  return 0;
}

function f_s(a:int, b:int, c:int):int {
  var e:int;
  var d:int = c != 0;
  if (eqz(a & 3)) goto B_c;
  if (eqz(c)) goto B_c;
  e = b & 255;
  loop L_d {
    if (a[0]:ubyte == e) goto B_b;
    c = c + -1;
    d = c != 0;
    a = a + 1;
    if (eqz(a & 3)) goto B_c;
    if (c) continue L_d;
  }
  label B_c:
  if (eqz(d)) goto B_a;
  if (a[0]:ubyte == (b & 255)) goto B_e;
  if (c < 4) goto B_e;
  e = (b & 255) * 16843009;
  loop L_f {
    if (
      ((16843008 - (d = a[0]:int ^ e) | d) & -2139062144) != -2139062144) goto B_b;
    a = a + 4;
    c = c + -4;
    if (c > 3) continue L_f;
  }
  label B_e:
  if (eqz(c)) goto B_a;
  label B_b:
  d = b & 255;
  loop L_g {
    if (a[0]:ubyte != d) goto B_h;
    return a;
    label B_h:
    a = a + 1;
    c = c + -1;
    if (c) continue L_g;
  }
  label B_a:
  return 0;
}

function f(a:int, b:int):int {
  var c:int = f_s(a, 0, b);
  return select_if(c - a, b, c);
}

function f_u():int {
  return 67444
}

function f_v(a:double, b:int_ptr):double {
  var c:long = i64_reinterpret_f64(a);
  var d:int = i32_wrap_i64(c >> 52L) & 2047;
  if (d == 2047) goto B_a;
  if (d) goto B_b;
  if (a != 0.0) goto B_d;
  d = 0;
  goto B_c;
  label B_d:
  a = f_v(a * 18446744073709551616.0, b);
  d = b[0] + -64;
  label B_c:
  b[0] = d;
  return a;
  label B_b:
  b[0] = d + -1022;
  a = f64_reinterpret_i64(
        (c & -9218868437227405313L) | 4602678819172646912L);
  label B_a:
  return a;
}

function f_w(a:int, b:int, c:int):int {
  var f:int;
  var e:int;
  if (c < 512) goto B_a;
  env_emscripten_memcpy_js(a, b, c);
  return a;
  label B_a:
  var d:int = a + c;
  if ((b ^ a) & 3) goto B_c;
  if (a & 3) goto B_e;
  c = a;
  goto B_d;
  label B_e:
  if (c) goto B_f;
  c = a;
  goto B_d;
  label B_f:
  c = a;
  loop L_g {
    c[0]:byte = b[0]:ubyte;
    b = b + 1;
    c = c + 1;
    if (eqz(c & 3)) goto B_d;
    if (c < d) continue L_g;
  }
  label B_d:
  e = d & -4;
  if (e < 64) goto B_h;
  if (c > (f = e + -64)) goto B_h;
  loop L_i {
    c[0]:int = b[0]:int;
    c[1]:int = b[1]:int;
    c[2]:int = b[2]:int;
    c[3]:int = b[3]:int;
    c[4]:int = b[4]:int;
    c[5]:int = b[5]:int;
    c[6]:int = b[6]:int;
    c[7]:int = b[7]:int;
    c[8]:int = b[8]:int;
    c[9]:int = b[9]:int;
    c[10]:int = b[10]:int;
    c[11]:int = b[11]:int;
    c[12]:int = b[12]:int;
    c[13]:int = b[13]:int;
    c[14]:int = b[14]:int;
    c[15]:int = b[15]:int;
    b = b + 64;
    c = c + 64;
    if (c <= f) continue L_i;
  }
  label B_h:
  if (c >= e) goto B_b;
  loop L_j {
    c[0]:int = b[0]:int;
    b = b + 4;
    c = c + 4;
    if (c < e) continue L_j;
    goto B_b;
  }
  unreachable;
  label B_c:
  if (d >= 4) goto B_k;
  c = a;
  goto B_b;
  label B_k:
  e = d + -4;
  if (e >= a) goto B_l;
  c = a;
  goto B_b;
  label B_l:
  c = a;
  loop L_m {
    c[0]:byte = b[0]:ubyte;
    c[1]:byte = b[1]:ubyte;
    c[2]:byte = b[2]:ubyte;
    c[3]:byte = b[3]:ubyte;
    b = b + 4;
    c = c + 4;
    if (c <= e) continue L_m;
  }
  label B_b:
  if (c >= d) goto B_n;
  loop L_o {
    c[0]:byte = b[0]:ubyte;
    b = b + 1;
    c = c + 1;
    if (c != d) continue L_o;
  }
  label B_n:
  return a;
}

function f_x(a:int, b:int, c:int_ptr):int {
  var d:int;
  var e:int;
  var f:int;
  d = c[4];
  if (d) goto B_b;
  e = 0;
  if (f_r(c)) goto B_a;
  d = c[4];
  label B_b:
  if (d - (e = c[5]) >= b) goto B_c;
  return call_indirect(c, a, b, c[9]);
  label B_c:
  if (c[20] < 0) goto B_e;
  if (eqz(b)) goto B_e;
  d = b;
  loop L_g {
    f = a + d;
    if ((f + -1)[0]:ubyte == 10) goto B_f;
    d = d + -1;
    if (eqz(d)) goto B_e;
    continue L_g;
  }
  unreachable;
  label B_f:
  e = call_indirect(c, a, d, c[9]);
  if (e < d) goto B_a;
  b = b - d;
  e = c[5];
  goto B_d;
  label B_e:
  f = a;
  d = 0;
  label B_d:
  f_w(e, f, b);
  c[5] = c[5] + b;
  e = d + b;
  label B_a:
  return e;
}

function f_y(a:int, b:int, c:int, d:int, e:int):int {
  var h:int;
  var i:int;
  var g:int;
  var f:int_ptr = g_a - 208;
  g_a = f;
  f[51] = c;
  f_k(f + 160, 0, 40);
  f[50] = f[51];
  if (f_z(0, b, f + 200, f + 80, f + 160, d, e) >= 0) goto B_b;
  e = -1;
  goto B_a;
  label B_b:
  if (a[19]:int >= 0) goto B_d;
  g = 1;
  goto B_c;
  label B_d:
  g = eqz(f_l(a));
  label B_c:
  a[0]:int = (h = a[0]:int) & -33;
  if (a[12]:int) goto B_h;
  a[12]:int = 80;
  a[7]:int = 0;
  a[2]:long = 0L;
  i = a[11]:int;
  a[11]:int = f;
  goto B_g;
  label B_h:
  i = 0;
  if (a[4]:int) goto B_f;
  label B_g:
  c = -1;
  if (f_r(a)) goto B_e;
  label B_f:
  c = f_z(a, b, f + 200, f + 80, f + 160, d, e);
  label B_e:
  e = h & 32;
  if (eqz(i)) goto B_i;
  call_indirect(a, 0, 0, a[9]:int);
  a[12]:int = 0;
  a[11]:int = i;
  a[7]:int = 0;
  d = a[5]:int;
  a[2]:long = 0L;
  c = select_if(c, -1, d);
  label B_i:
  a[0]:int = (d = a[0]:int) | e;
  e = select_if(-1, c, d & 32);
  if (g) goto B_a;
  f_m(a);
  label B_a:
  g_a = f + 208;
  return e;
}

function f_z(a:ubyte_ptr, b:int, c:int_ptr, d:int, e:int, f:int, g:int):int {
  var p:int;
  var s:byte_ptr;
  var t:int;
  var z:long;
  var v:int;
  var w:ubyte_ptr;
  var o:int;
  var x:int;
  var u:int;
  var q:int;
  var r:int;
  var y:int;
  var h:int = g_a - 64;
  g_a = h;
  h[15]:int = b;
  var i:int = h + 39;
  var j:int = h + 40;
  var k:int = 0;
  var l:int = 0;
  loop L_e {
    var m:int = 0;
    loop L_f {
      var n:ubyte_ptr = b;
      if (m > (l ^ 2147483647)) goto B_d;
      l = m + l;
      m = n;
      o = n[0];
      if (eqz(o)) goto B_l;
      loop L_m {
        o = o & 255;
        if (o) goto B_p;
        b = m;
        goto B_o;
        label B_p:
        if (o != 37) goto B_n;
        o = m;
        loop L_q {
          if (o[1]:ubyte == 37) goto B_r;
          b = o;
          goto B_o;
          label B_r:
          m = m + 1;
          p = o[2]:ubyte;
          b = o + 2;
          o = b;
          if (p == 37) continue L_q;
        }
        label B_o:
        m = m - n;
        if (m > (o = l ^ 2147483647)) goto B_d;
        if (eqz(a)) goto B_s;
        f_aa(a, n, m);
        label B_s:
        if (m) continue L_f;
        h[15]:int = b;
        m = b + 1;
        q = -1;
        p = b[1]:byte + -48;
        if (p > 9) goto B_t;
        if (b[2]:ubyte != 36) goto B_t;
        m = b + 3;
        k = 1;
        q = p;
        label B_t:
        h[15]:int = m;
        r = 0;
        s = m[0]:byte;
        b = s + -32;
        if (b <= 31) goto B_v;
        p = m;
        goto B_u;
        label B_v:
        r = 0;
        p = m;
        b = 1 << b;
        if (eqz(b & 75913)) goto B_u;
        loop L_w {
          h[15]:int = (p = m + 1);
          r = b | r;
          s = m[1]:byte;
          b = s + -32;
          if (b >= 32) goto B_u;
          m = p;
          b = 1 << b;
          if (b & 75913) continue L_w;
        }
        label B_u:
        if (s != 42) goto B_y;
        m = p[1]:byte + -48;
        if (m > 9) goto B_aa;
        if (p[2]:ubyte != 36) goto B_aa;
        if (a) goto B_ca;
        e[m]:int = 10;
        t = 0;
        goto B_ba;
        label B_ca:
        t = (d + (m << 3))[0]:int;
        label B_ba:
        b = p + 3;
        k = 1;
        goto B_z;
        label B_aa:
        if (k) goto B_k;
        b = p + 1;
        if (a) goto B_da;
        h[15]:int = b;
        k = 0;
        t = 0;
        goto B_x;
        label B_da:
        c[0] = (m = c[0]) + 4;
        t = m[0]:int;
        k = 0;
        label B_z:
        h[15]:int = b;
        if (t > -1) goto B_x;
        t = 0 - t;
        r = r | 8192;
        goto B_x;
        label B_y:
        t = f_ba(h + 60);
        if (t < 0) goto B_d;
        b = h[15]:int;
        label B_x:
        m = 0;
        u = -1;
        if (b[0]:ubyte == 46) goto B_fa;
        v = 0;
        goto B_ea;
        label B_fa:
        if (b[1]:ubyte != 42) goto B_ga;
        p = b[2]:byte + -48;
        if (p > 9) goto B_ia;
        if (b[3]:ubyte != 36) goto B_ia;
        if (a) goto B_ka;
        e[p]:int = 10;
        u = 0;
        goto B_ja;
        label B_ka:
        u = (d + (p << 3))[0]:int;
        label B_ja:
        b = b + 4;
        goto B_ha;
        label B_ia:
        if (k) goto B_k;
        b = b + 2;
        if (a) goto B_la;
        u = 0;
        goto B_ha;
        label B_la:
        c[0] = (p = c[0]) + 4;
        u = p[0]:int;
        label B_ha:
        h[15]:int = b;
        v = u > -1;
        goto B_ea;
        label B_ga:
        h[15]:int = b + 1;
        v = 1;
        u = f_ba(h + 60);
        b = h[15]:int;
        label B_ea:
        loop L_ma {
          p = m;
          w = 28;
          s = b;
          m = s[0];
          if (m + -123 < -58) goto B_c;
          b = s + 1;
          m = (m + p * 58 + 65695)[0]:ubyte;
          if (m + -1 < 8) continue L_ma;
        }
        h[15]:int = b;
        if (m == 27) goto B_oa;
        if (eqz(m)) goto B_c;
        if (q < 0) goto B_pa;
        if (a) goto B_qa;
        e[q]:int = m;
        continue L_e;
        label B_qa:
        h[6]:long = d[q]:long;
        goto B_na;
        label B_pa:
        if (eqz(a)) goto B_g;
        f_ca(h + 48, m, c, g);
        goto B_na;
        label B_oa:
        if (q > -1) goto B_c;
        m = 0;
        if (eqz(a)) continue L_f;
        label B_na:
        if (a[0] & 32) goto B_b;
        x = r & -65537;
        r = select_if(x, r, r & 8192);
        q = 0;
        y = 65672;
        w = j;
        m = s[0];
        m = select_if(select_if(m & -45, m, (m & 15) == 3), m, p);
        br_table[B_db, B_h, B_h, B_h, B_h, B_h, B_h, B_h, B_h, B_ra, B_h, B_ya, B_bb, B_ra, B_ra, B_ra, B_h, B_bb, B_h, B_h, B_h, B_h, B_fb, B_cb, B_eb, B_h, B_h, B_xa, B_h, B_gb, B_h, B_h, B_db, ..B_hb](
          m + -88);
        label B_hb:
        w = j;
        br_table[B_ra, B_h, B_wa, B_h, B_ra, B_ra, B_ra, ..B_ib](m + -65)
        label B_ib:
        if (m == 83) goto B_va;
        goto B_i;
        label B_gb:
        q = 0;
        y = 65672;
        z = h[6]:long;
        goto B_ab;
        label B_fb:
        m = 0;
        br_table[B_pb, B_ob, B_nb, B_mb, B_lb, L_f, B_kb, B_jb, ..L_f](
          p & 255)
        label B_pb:
        (h[12]:int)[0]:int = l;
        continue L_f;
        label B_ob:
        (h[12]:int)[0]:int = l;
        continue L_f;
        label B_nb:
        (h[12]:int)[0]:long = i64_extend_i32_s(l);
        continue L_f;
        label B_mb:
        (h[12]:int)[0]:short = l;
        continue L_f;
        label B_lb:
        (h[12]:int)[0]:byte = l;
        continue L_f;
        label B_kb:
        (h[12]:int)[0]:int = l;
        continue L_f;
        label B_jb:
        (h[12]:int)[0]:long = i64_extend_i32_s(l);
        continue L_f;
        label B_eb:
        u = select_if(u, 8, u > 8);
        r = r | 8;
        m = 120;
        label B_db:
        n = f_da(h[6]:long, j, m & 32);
        q = 0;
        y = 65672;
        if (eqz(h[6]:long)) goto B_za;
        if (eqz(r & 8)) goto B_za;
        y = (m >> 4) + 65672;
        q = 2;
        goto B_za;
        label B_cb:
        q = 0;
        y = 65672;
        n = f_ea(h[6]:long, j);
        if (eqz(r & 8)) goto B_za;
        u = select_if(u, (m = j - n) + 1, u > m);
        goto B_za;
        label B_bb:
        z = h[6]:long;
        if (z > -1L) goto B_qb;
        h[6]:long = (z = 0L - z);
        q = 1;
        y = 65672;
        goto B_ab;
        label B_qb:
        if (eqz(r & 2048)) goto B_rb;
        q = 1;
        y = 65673;
        goto B_ab;
        label B_rb:
        y = select_if(65674, 65672, q = r & 1);
        label B_ab:
        n = f_fa(z, j);
        label B_za:
        if (v & u < 0) goto B_d;
        r = select_if(r & -65537, r, v);
        z = h[6]:long;
        if (z != 0L) goto B_sb;
        if (u) goto B_sb;
        n = j;
        w = j;
        u = 0;
        goto B_h;
        label B_sb:
        u = select_if(u, m = j - n + eqz(z), u > m);
        goto B_i;
        label B_ya:
        z = h[6]:long;
        goto B_j;
        label B_xa:
        m = h[12]:int;
        n = select_if(m, 65719, m);
        w = n + (m = f(n, select_if(u, 2147483647, u < 2147483647)));
        if (u <= -1) goto B_tb;
        r = x;
        u = m;
        goto B_h;
        label B_tb:
        r = x;
        u = m;
        if (w[0]) goto B_d;
        goto B_h;
        label B_wa:
        z = h[6]:long;
        if (eqz(eqz(z))) goto B_ua;
        z = 0L;
        goto B_j;
        label B_va:
        if (eqz(u)) goto B_ub;
        o = h[12]:int;
        goto B_ta;
        label B_ub:
        m = 0;
        f_ga(a, 32, t, 0, r);
        goto B_sa;
        label B_ua:
        h[3]:int = 0;
        h[2]:int = z;
        h[12]:int = h + 8;
        o = h + 8;
        u = -1;
        label B_ta:
        m = 0;
        loop L_wb {
          p = o[0]:int;
          if (eqz(p)) goto B_vb;
          p = f_ra(h + 4, p);
          if (p < 0) goto B_b;
          if (p > u - m) goto B_vb;
          o = o + 4;
          m = p + m;
          if (m < u) continue L_wb;
        }
        label B_vb:
        w = 61;
        if (m < 0) goto B_c;
        f_ga(a, 32, t, m, r);
        if (m) goto B_xb;
        m = 0;
        goto B_sa;
        label B_xb:
        p = 0;
        o = h[12]:int;
        loop L_yb {
          n = o[0]:int;
          if (eqz(n)) goto B_sa;
          n = f_ra(h + 4, n);
          p = n + p;
          if (p > m) goto B_sa;
          f_aa(a, h + 4, n);
          o = o + 4;
          if (p < m) continue L_yb;
        }
        label B_sa:
        f_ga(a, 32, t, m, r ^ 8192);
        m = select_if(t, m, t > m);
        continue L_f;
        label B_ra:
        if (v & u < 0) goto B_d;
        w = 61;
        m = call_indirect(a, h[6]:double, t, u, r, m, f);
        if (m >= 0) continue L_f;
        goto B_c;
        label B_n:
        o = m[1]:ubyte;
        m = m + 1;
        continue L_m;
      }
      unreachable;
      label B_l:
      if (a) goto B_a;
      if (eqz(k)) goto B_g;
      m = 1;
      loop L_ac {
        o = e[m]:int;
        if (eqz(o)) goto B_zb;
        f_ca(d + (m << 3), o, c, g);
        l = 1;
        m = m + 1;
        if (m != 10) continue L_ac;
        goto B_a;
      }
      unreachable;
      label B_zb:
      l = 1;
      if (m >= 10) goto B_a;
      loop L_bc {
        if (e[m]:int) goto B_k;
        l = 1;
        m = m + 1;
        if (m == 10) goto B_a;
        continue L_bc;
      }
      unreachable;
      label B_k:
      w = 28;
      goto B_c;
      label B_j:
      h[39]:byte = z;
      u = 1;
      n = i;
      w = j;
      r = x;
      goto B_h;
      label B_i:
      w = j;
      label B_h:
      s = select_if(u, b = w - n, u > b);
      if (s > (q ^ 2147483647)) goto B_d;
      w = 61;
      m = select_if(t, p = q + s, t > p);
      if (m > o) goto B_c;
      f_ga(a, 32, m, p, r);
      f_aa(a, y, q);
      f_ga(a, 48, m, p, r ^ 65536);
      f_ga(a, 48, s, b, 0);
      f_aa(a, n, b);
      f_ga(a, 32, m, p, r ^ 8192);
      b = h[15]:int;
      continue L_f;
      label B_g:
    }
  }
  l = 0;
  goto B_a;
  label B_d:
  w = 61;
  label B_c:
  f_u()[0]:int = w;
  label B_b:
  l = -1;
  label B_a:
  g_a = h + 64;
  return l;
}

function f_aa(a:ubyte_ptr, b:int, c:int) {
  if (a[0] & 32) goto B_a;
  f_x(b, c, a);
  label B_a:
}

function f_ba(a:int_ptr):int {
  var d:int;
  var c:{ a:byte, b:byte }
  var e:int;
  var b:int = 0;
  c = a[0];
  d = c.a + -48;
  if (d <= 9) goto B_a;
  return 0;
  label B_a:
  loop L_b {
    e = -1;
    if (b > 214748364) goto B_c;
    e = select_if(-1, d + (b = b * 10), d > (b ^ 2147483647));
    label B_c:
    a[0] = (d = c + 1);
    var f:int = c.b;
    b = e;
    c = d;
    d = f + -48;
    if (d < 10) continue L_b;
  }
  return e;
}

function f_ca(a:int, b:int, c:int_ptr, d:int) {
  br_table[B_s, B_r, B_q, B_n, B_p, B_o, B_m, B_l, B_k, B_j, B_i, B_h, B_g, B_f, B_e, B_d, B_c, B_b, ..B_a](
    b + -9)
  label B_s:
  c[0] = (b = c[0]) + 4;
  a[0]:int = b[0]:int;
  return ;
  label B_r:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:int;
  return ;
  label B_q:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:uint;
  return ;
  label B_p:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:int;
  return ;
  label B_o:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:uint;
  return ;
  label B_n:
  c[0] = (b = c[0] + 7 & -8) + 8;
  a[0]:long = b[0]:long;
  return ;
  label B_m:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:short;
  return ;
  label B_l:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:ushort;
  return ;
  label B_k:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:byte;
  return ;
  label B_j:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:ubyte;
  return ;
  label B_i:
  c[0] = (b = c[0] + 7 & -8) + 8;
  a[0]:long = b[0]:long;
  return ;
  label B_h:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:uint;
  return ;
  label B_g:
  c[0] = (b = c[0] + 7 & -8) + 8;
  a[0]:long = b[0]:long;
  return ;
  label B_f:
  c[0] = (b = c[0] + 7 & -8) + 8;
  a[0]:long = b[0]:long;
  return ;
  label B_e:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:int;
  return ;
  label B_d:
  c[0] = (b = c[0]) + 4;
  a[0]:long = b[0]:uint;
  return ;
  label B_c:
  c[0] = (b = c[0] + 7 & -8) + 8;
  a[0]:double = b[0]:double;
  return ;
  label B_b:
  call_indirect(a, c, d);
  label B_a:
}

function f_da(a:long, b:byte_ptr, c:int):int {
  if (eqz(a)) goto B_a;
  loop L_b {
    b = b + -1;
    b[0] = ((i32_wrap_i64(a) & 15) + 66224)[0]:ubyte | c;
    var d:int = a > 15L;
    a = a >> 4L;
    if (d) continue L_b;
  }
  label B_a:
  return b;
}

function f_ea(a:long, b:byte_ptr):int {
  if (eqz(a)) goto B_a;
  loop L_b {
    b = b + -1;
    b[0] = (i32_wrap_i64(a) & 7) | 48;
    var c:int = a > 7L;
    a = a >> 3L;
    if (c) continue L_b;
  }
  label B_a:
  return b;
}

function f_fa(a:long, b:byte_ptr):int {
  var c:long;
  var d:int;
  var e:int;
  if (a >= 4294967296L) goto B_b;
  c = a;
  goto B_a;
  label B_b:
  loop L_c {
    b = b + -1;
    b[0] = i32_wrap_i64(a - (c = a / 10L) * 10L) | 48;
    d = a > 42949672959L;
    a = c;
    if (d) continue L_c;
  }
  label B_a:
  if (eqz(c)) goto B_d;
  d = i32_wrap_i64(c);
  loop L_e {
    b = b + -1;
    b[0] = d - (e = d / 10) * 10 | 48;
    var f:int = d > 9;
    d = e;
    if (f) continue L_e;
  }
  label B_d:
  return b;
}

function f_ga(a:int, b:int, c:int, d:int, e:int) {
  var f:int = g_a - 256;
  g_a = f;
  if (c <= d) goto B_a;
  if (e & 73728) goto B_a;
  f_k(f, b, select_if(d = c - d, 256, c = d < 256));
  if (c) goto B_b;
  loop L_c {
    f_aa(a, f, 256);
    d = d + -256;
    if (d > 255) continue L_c;
  }
  label B_b:
  f_aa(a, f, d);
  label B_a:
  g_a = f + 256;
}

function f_ha(a:int, b:int, c:int):int {
  return f_y(a, b, c, 4, 5)
}

function f_ia(a:int, b:double, c:int, d:int, e:int, f:int):int {
  var i:int;
  var y:long;
  var k:int;
  var j:ubyte_ptr;
  var l:int;
  var o:int;
  var q:int;
  var s:int;
  var aa:long;
  var p:int;
  var m:int;
  var w:byte_ptr;
  var v:int_ptr;
  var x:ubyte_ptr;
  var t:byte_ptr;
  var u:int;
  var ba:double;
  var g:int_ptr = g_a - 560;
  g_a = g;
  var h:int = 0;
  g[11] = 0;
  y = f_ka(b);
  if (y > -1L) goto B_b;
  i = 1;
  j = 65682;
  b = -(b);
  y = f_ka(b);
  goto B_a;
  label B_b:
  if (eqz(e & 2048)) goto B_c;
  i = 1;
  j = 65685;
  goto B_a;
  label B_c:
  j = select_if(65688, 65683, i = e & 1);
  h = eqz(i);
  label B_a:
  if ((y & 9218868437227405312L) != 9218868437227405312L) goto B_e;
  f_ga(a, 32, c, k = i + 3, e & -65537);
  f_aa(a, j, i);
  f_aa(a,
       select_if(select_if(65701, 65709, l = f & 32),
                 select_if(65705, 65713, l),
                 b != b),
       3);
  f_ga(a, 32, c, k, e ^ 8192);
  m = select_if(k, c, k > c);
  goto B_d;
  label B_e:
  var n:int = g + 16;
  b = f_v(b, g + 44);
  b = b + b;
  if (b == 0.0) goto B_i;
  g[11] = (k = g[11]) + -1;
  o = f | 32;
  if (o != 97) goto B_h;
  goto B_f;
  label B_i:
  o = f | 32;
  if (o == 97) goto B_f;
  p = select_if(6, d, d < 0);
  q = g[11];
  goto B_g;
  label B_h:
  g[11] = (q = k + -29);
  p = select_if(6, d, d < 0);
  b = b * 268435456.0;
  label B_g:
  var r:int = g + 48 + select_if(0, 288, q < 0);
  l = r;
  loop L_j {
    if (eqz(b < 4294967296.0 & b >= 0.0)) goto B_l;
    k = i32_trunc_f64_u(b);
    goto B_k;
    label B_l:
    k = 0;
    label B_k:
    l[0]:int = k;
    l = l + 4;
    b = (b - f64_convert_i32_u(k)) * 1000000000.0;
    if (b != 0.0) continue L_j;
  }
  if (q >= 1) goto B_n;
  d = q;
  k = l;
  s = r;
  goto B_m;
  label B_n:
  s = r;
  d = q;
  loop L_o {
    d = select_if(d, 29, d < 29);
    k = l + -4;
    if (k < s) goto B_p;
    var z:long = i64_extend_i32_u(d);
    y = 0L;
    loop L_q {
      k[0]:int =
        (aa = (k[0]:uint << z) + (y & 4294967295L)) -
        (y = aa / 1000000000L) * 1000000000L;
      k = k + -4;
      if (k >= s) continue L_q;
    }
    if (aa < 1000000000L) goto B_p;
    s = s + -4;
    s[0]:int = y;
    label B_p:
    loop L_s {
      k = l;
      if (k <= s) goto B_r;
      l = k + -4;
      if (eqz(l[0]:int)) continue L_s;
    }
    label B_r:
    g[11] = (d = g[11] - d);
    l = k;
    if (d > 0) continue L_o;
  }
  label B_m:
  if (d > -1) goto B_t;
  t = (p + 25) / 9 + 1;
  u = o == 102;
  loop L_u {
    l = 0 - d;
    v = select_if(l, 9, l < 9);
    if (s < k) goto B_w;
    l = eqz(s[0]:int) << 2;
    goto B_v;
    label B_w:
    w = 1000000000 >> v;
    x = -1 << v ^ -1;
    d = 0;
    l = s;
    loop L_x {
      l[0]:int = ((m = l[0]:int) >> v) + d;
      d = (m & x) * w;
      l = l + 4;
      if (l < k) continue L_x;
    }
    l = eqz(s[0]:int) << 2;
    if (eqz(d)) goto B_v;
    k[0]:int = d;
    k = k + 4;
    label B_v:
    g[11] = (d = g[11] + v);
    l = select_if(r, s = s + l, u);
    k = select_if(l + (t << 2), k, k - l >> 2 > t);
    if (d < 0) continue L_u;
  }
  label B_t:
  d = 0;
  if (s >= k) goto B_y;
  d = (r - s >> 2) * 9;
  l = 10;
  m = s[0]:int;
  if (m < 10) goto B_y;
  loop L_z {
    d = d + 1;
    if (m >= (l = l * 10)) continue L_z;
  }
  label B_y:
  l = p - select_if(0, d, o == 102) - (p != 0 & o == 103);
  if (l >= (k - r >> 2) * 9 + -9) goto B_aa;
  v = g + 48 + select_if(-4092, -3804, q < 0) +
      ((w = (m = l + 9216) / 9) << 2);
  l = 10;
  m = m - w * 9;
  if (m > 7) goto B_ba;
  loop L_ca {
    l = l * 10;
    m = m + 1;
    if (m != 8) continue L_ca;
  }
  label B_ba:
  x = v + 4;
  m = v[0];
  w = m - (t = m / l) * l;
  if (w) goto B_ea;
  if (x == k) goto B_da;
  label B_ea:
  if (t & 1) goto B_ga;
  b = 9007199254740992.0;
  if (l != 1000000000) goto B_fa;
  if (v <= s) goto B_fa;
  if (eqz((v + -4)[0]:ubyte & 1)) goto B_fa;
  label B_ga:
  b = 9007199254740994.0;
  label B_fa:
  ba = 
    select_if(
      0.5,
      select_if(select_if(1.0, 1.5, x == k), 1.5, w == (x = l >> 1)),
      w < x);
  if (h) goto B_ha;
  if (j[0] != 45) goto B_ha;
  ba = -(ba);
  b = -(b);
  label B_ha:
  v[0] = (m = m - w);
  if (b + ba == b) goto B_da;
  v[0] = (l = m + l);
  if (l < 1000000000) goto B_ia;
  loop L_ja {
    v[0] = 0;
    v = v + -4;
    if (v >= s) goto B_ka;
    s = s + -4;
    s[0]:int = 0;
    label B_ka:
    v[0] = (l = v[0] + 1);
    if (l > 999999999) continue L_ja;
  }
  label B_ia:
  d = (r - s >> 2) * 9;
  l = 10;
  m = s[0]:int;
  if (m < 10) goto B_da;
  loop L_la {
    d = d + 1;
    if (m >= (l = l * 10)) continue L_la;
  }
  label B_da:
  l = v + 4;
  k = select_if(l, k, k > l);
  label B_aa:
  loop L_na {
    l = k;
    m = l <= s;
    if (m) goto B_ma;
    k = l + -4;
    if (eqz(k[0]:int)) continue L_na;
  }
  label B_ma:
  if (o == 103) goto B_pa;
  v = e & 8;
  goto B_oa;
  label B_pa:
  p = 
    select_if(d ^ -1, -1, v = (k = select_if(p, 1, p)) > d & d > -5) + k;
  f = select_if(-1, -2, v) + f;
  v = e & 8;
  if (v) goto B_oa;
  k = -9;
  if (m) goto B_qa;
  v = (l + -4)[0]:int;
  if (eqz(v)) goto B_qa;
  m = 10;
  k = 0;
  if (v % 10) goto B_qa;
  loop L_ra {
    w = k;
    k = w + 1;
    if (eqz(v % (m = m * 10))) continue L_ra;
  }
  k = w ^ -1;
  label B_qa:
  m = (l - r >> 2) * 9;
  if ((f & -33) != 70) goto B_sa;
  v = 0;
  p = select_if(p, k = select_if(k = m + k + -9, 0, k > 0), p < k);
  goto B_oa;
  label B_sa:
  v = 0;
  p = select_if(p, k = select_if(k = d + m + k + -9, 0, k > 0), p < k);
  label B_oa:
  m = -1;
  if (p > select_if(2147483645, 2147483646, w = p | v)) goto B_d;
  x = p + (w != 0) + 1;
  u = f & -33;
  if (u != 70) goto B_ua;
  if (d > (x ^ 2147483647)) goto B_d;
  k = select_if(d, 0, d > 0);
  goto B_ta;
  label B_ua:
  if (
    n - (k = f_fa(i64_extend_i32_u((d ^ (k = d >> 31)) - k), n)) > 1) goto B_va;
  loop L_wa {
    k = k + -1;
    k[0]:byte = 48;
    if (n - k < 2) continue L_wa;
  }
  label B_va:
  t = k + -2;
  t[0] = f;
  m = -1;
  (k + -1)[0]:byte = select_if(45, 43, d < 0);
  k = n - t;
  if (k > (x ^ 2147483647)) goto B_d;
  label B_ta:
  m = -1;
  k = k + x;
  if (k > (i ^ 2147483647)) goto B_d;
  f_ga(a, 32, c, x = k + i, e);
  f_aa(a, j, i);
  f_ga(a, 48, c, x, e ^ 65536);
  if (u != 70) goto B_ab;
  d = g + 16 | 9;
  m = select_if(r, s, s > r);
  s = m;
  loop L_bb {
    k = f_fa(s[0]:uint, d);
    if (s == m) goto B_db;
    if (k <= g + 16) goto B_cb;
    loop L_eb {
      k = k + -1;
      k[0]:byte = 48;
      if (k > g + 16) continue L_eb;
      goto B_cb;
    }
    unreachable;
    label B_db:
    if (k != d) goto B_cb;
    k = k + -1;
    k[0]:byte = 48;
    label B_cb:
    f_aa(a, k, d - k);
    s = s + 4;
    if (s <= r) continue L_bb;
  }
  if (eqz(w)) goto B_fb;
  f_aa(a, 65717, 1);
  label B_fb:
  if (s >= l) goto B_za;
  if (p < 1) goto B_za;
  loop L_gb {
    k = f_fa(s[0]:uint, d);
    if (k <= g + 16) goto B_hb;
    loop L_ib {
      k = k + -1;
      k[0]:byte = 48;
      if (k > g + 16) continue L_ib;
    }
    label B_hb:
    f_aa(a, k, select_if(p, 9, p < 9));
    k = p + -9;
    s = s + 4;
    if (s >= l) goto B_ya;
    m = p > 9;
    p = k;
    if (m) continue L_gb;
    goto B_ya;
  }
  unreachable;
  label B_ab:
  if (p < 0) goto B_jb;
  w = select_if(l, s + 4, l > s);
  d = g + 16 | 9;
  l = s;
  loop L_kb {
    k = f_fa(l[0]:uint, d);
    if (k != d) goto B_lb;
    k = k + -1;
    k[0]:byte = 48;
    label B_lb:
    if (l == s) goto B_nb;
    if (k <= g + 16) goto B_mb;
    loop L_ob {
      k = k + -1;
      k[0]:byte = 48;
      if (k > g + 16) continue L_ob;
      goto B_mb;
    }
    unreachable;
    label B_nb:
    f_aa(a, k, 1);
    k = k + 1;
    if (eqz(p | v)) goto B_mb;
    f_aa(a, 65717, 1);
    label B_mb:
    f_aa(a, k, select_if(m = d - k, p, p > m));
    p = p - m;
    l = l + 4;
    if (l >= w) goto B_jb;
    if (p > -1) continue L_kb;
  }
  label B_jb:
  f_ga(a, 48, p + 18, 18, 0);
  f_aa(a, t, n - t);
  goto B_xa;
  label B_za:
  k = p;
  label B_ya:
  f_ga(a, 48, k + 9, 9, 0);
  label B_xa:
  f_ga(a, 32, c, x, e ^ 8192);
  m = select_if(x, c, x > c);
  goto B_d;
  label B_f:
  x = j + ((f << 26) >> 31 & 9);
  if (d > 11) goto B_pb;
  k = 12 - d;
  ba = 16.0;
  loop L_qb {
    ba = ba * 16.0;
    k = k + -1;
    if (k) continue L_qb;
  }
  if (x[0] != 45) goto B_rb;
  b = -(ba + -(b) - ba);
  goto B_pb;
  label B_rb:
  b = b + ba - ba;
  label B_pb:
  k = g[11];
  k = f_fa(i64_extend_i32_u((k ^ (k = k >> 31)) - k), n);
  if (k != n) goto B_sb;
  k = k + -1;
  k[0]:byte = 48;
  label B_sb:
  v = i | 2;
  s = f & 32;
  l = g[11];
  w = k + -2;
  w[0] = f + 15;
  (k + -1)[0]:byte = select_if(45, 43, l < 0);
  m = e & 8;
  l = g + 16;
  loop L_tb {
    k = l;
    if (eqz(abs(b) < 2147483648.0)) goto B_vb;
    l = i32_trunc_f64_s(b);
    goto B_ub;
    label B_vb:
    l = -2147483648;
    label B_ub:
    k[0]:byte = (l + 66224)[0]:ubyte | s;
    b = (b - f64_convert_i32_s(l)) * 16.0;
    l = k + 1;
    if (l - g + 16 != 1) goto B_wb;
    if (m) goto B_xb;
    if (d > 0) goto B_xb;
    if (b == 0.0) goto B_wb;
    label B_xb:
    k[1]:byte = 46;
    l = k + 2;
    label B_wb:
    if (b != 0.0) continue L_tb;
  }
  m = -1;
  if (2147483645 - (t = v + (s = n - w)) < d) goto B_d;
  f_ga(
    a,
    32,
    c,
    l = 
      t +
      (d = select_if(select_if(d + 2, k = l - g + 16, k + -2 < d), k, d)),
    e);
  f_aa(a, x, v);
  f_ga(a, 48, c, l, e ^ 65536);
  f_aa(a, g + 16, k);
  f_ga(a, 48, d - k, 0, 0);
  f_aa(a, w, s);
  f_ga(a, 32, c, l, e ^ 8192);
  m = select_if(l, c, l > c);
  label B_d:
  g_a = g + 560;
  return m;
}

function f_ja(a:double_ptr, b:int_ptr) {
  var c:long_ptr;
  b[0] = (c = b[0] + 7 & -8) + 16;
  a[0] = f_ya(c[0], (c + 8)[0]:long);
}

function f_ka(a:double):long {
  return i64_reinterpret_f64(a)
}

function f_la(a:int):int {
  if (a) goto B_a;
  return 0;
  label B_a:
  f_u()[0]:int = a;
  return -1;
}

function f_ma():int {
  return 42
}

function f_na():int {
  return f_ma()
}

function f_oa():int {
  return 67504
}

function f_pa() {
  0[16900]:int = 67480;
  0[16882]:int = f_na();
}

function f_qa(a:{ a:byte, b:byte, c:byte, d:byte }, b:int, c:int):int {
  var d:int = 1;
  if (eqz(a)) goto B_b;
  if (b <= 127) goto B_a;
  if ((f_oa()[24]:int)[0]:int) goto B_d;
  if ((b & -128) == 57216) goto B_a;
  f_u()[0]:int = 25;
  goto B_c;
  label B_d:
  if (b > 2047) goto B_e;
  a.b = (b & 63) | 128;
  a.a = b >> 6 | 192;
  return 2;
  label B_e:
  if (b < 55296) goto B_g;
  if ((b & -8192) != 57344) goto B_f;
  label B_g:
  a.c = (b & 63) | 128;
  a.a = b >> 12 | 224;
  a.b = (b >> 6 & 63) | 128;
  return 3;
  label B_f:
  if (b + -65536 > 1048575) goto B_h;
  a.d = (b & 63) | 128;
  a.a = b >> 18 | 240;
  a.c = (b >> 6 & 63) | 128;
  a.b = (b >> 12 & 63) | 128;
  return 4;
  label B_h:
  f_u()[0]:int = 25;
  label B_c:
  d = -1;
  label B_b:
  return d;
  label B_a:
  a.a = b;
  return 1;
}

function f_ra(a:int, b:int):int {
  if (a) goto B_a;
  return 0;
  label B_a:
  return f_qa(a, b, 0);
}

function f_sa():int {
  return memory_size() << 16
}

function f_ta(a:int):int {
  var c:int;
  var b:int = d_b[37]:int;
  a = b + (c = a + 7 & -8);
  if (eqz(c)) goto B_c;
  if (a <= b) goto B_b;
  label B_c:
  if (a <= f_sa()) goto B_a;
  if (env_emscripten_resize_heap(a)) goto B_a;
  label B_b:
  f_u()[0]:int = 48;
  return -1;
  label B_a:
  d_b[37]:int = a;
  return b;
}

function f_ua(a:int):int {
  var d:{ a:int, b:int, c:int }
  var e:int;
  var f:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int }
  var g:int;
  var h:int;
  var c:int_ptr;
  var i:int;
  var l:int_ptr;
  var k:int_ptr;
  var j:int;
  var b:int = g_a - 16;
  g_a = b;
  if (a > 244) goto B_k;
  c = 0[16909]:int;
  a = c >> (e = (d = select_if(16, a + 11 & 504, a < 11)) >> 3);
  if (eqz(a & 3)) goto B_l;
  d = ((a ^ -1) & 1) + e;
  e = d << 3;
  a = e + 67676;
  if (a != (f = (e = (e + 67684)[0]:int)[2]:int)) goto B_n;
  0[16909]:int = c & -2 << d;
  goto B_m;
  label B_n:
  f.d = a;
  a[2]:int = f;
  label B_m:
  a = e + 8;
  e[1]:int = (d = d << 3) | 3;
  e = e + d;
  e[1]:int = e[1]:int | 1;
  goto B_a;
  label B_l:
  if (d <= (g = 0[16911]:int)) goto B_j;
  if (eqz(a)) goto B_o;
  e = ctz(a << e & ((a = 2 << e) | 0 - a));
  a = e << 3;
  f = a + 67676;
  if (f != (h = (a = (a + 67684)[0]:int)[2]:int)) goto B_q;
  0[16909]:int = (c = c & -2 << e);
  goto B_p;
  label B_q:
  h[3]:int = f;
  f.c = h;
  label B_p:
  a[1]:int = d | 3;
  h = a + d;
  h[1]:int = (d = (e = e << 3) - d) | 1;
  (a + e)[0]:int = d;
  if (eqz(g)) goto B_r;
  f = (g & -8) + 67676;
  e = 0[16914]:int;
  if (c & (i = 1 << (g >> 3))) goto B_t;
  0[16909]:int = c | i;
  i = f;
  goto B_s;
  label B_t:
  i = f.c;
  label B_s:
  f.c = e;
  i[3]:int = e;
  e[3]:int = f;
  e[2]:int = i;
  label B_r:
  a = a + 8;
  0[16914]:int = h;
  0[16911]:int = d;
  goto B_a;
  label B_o:
  j = 0[16910]:int;
  if (eqz(j)) goto B_j;
  h = ((ctz(j) << 2) + 67940)[0]:int;
  e = (h[1]:int & -8) - d;
  f = h;
  loop L_v {
    a = f.e;
    if (a) goto B_w;
    a = f.f;
    if (eqz(a)) goto B_u;
    label B_w:
    f = (a[1]:int & -8) - d;
    e = select_if(f, e, f = f < e);
    h = select_if(a, h, f);
    f = a;
    continue L_v;
  }
  unreachable;
  label B_u:
  k = h[6]:int;
  a = h[3]:int;
  if (a == h) goto B_x;
  f = h[2]:int;
  f.d = a;
  a[2]:int = f;
  goto B_b;
  label B_x:
  f = h[5]:int;
  if (eqz(f)) goto B_z;
  i = h + 20;
  goto B_y;
  label B_z:
  f = h[4]:int;
  if (eqz(f)) goto B_i;
  i = h + 16;
  label B_y:
  loop L_aa {
    l = i;
    a = f;
    i = a + 20;
    f = a[5]:int;
    if (f) continue L_aa;
    i = a + 16;
    f = a[4]:int;
    if (f) continue L_aa;
  }
  l[0] = 0;
  goto B_b;
  label B_k:
  d = -1;
  if (a > -65) goto B_j;
  a = a + 11;
  d = a & -8;
  k = 0[16910]:int;
  if (eqz(k)) goto B_j;
  g = 0;
  if (d < 256) goto B_ba;
  g = 31;
  if (d > 16777215) goto B_ba;
  g = (d >> 38 - (a = clz(a >> 8)) & 1) - (a << 1) + 62;
  label B_ba:
  e = 0 - d;
  f = ((g << 2) + 67940)[0]:int;
  if (f) goto B_fa;
  a = 0;
  i = 0;
  goto B_ea;
  label B_fa:
  a = 0;
  h = d << select_if(0, 25 - (g >> 1), g == 31);
  i = 0;
  loop L_ga {
    c = (f.b & -8) - d;
    if (c >= e) goto B_ha;
    e = c;
    i = f;
    if (c) goto B_ha;
    e = 0;
    i = f;
    a = f;
    goto B_da;
    label B_ha:
    a = 
      select_if(
        select_if(a, c = f.f, c == (l = (f + (h >> 29 & 4) + 16)[0]:int)),
        a,
        c);
    h = h << 1;
    f = l;
    if (l) continue L_ga;
  }
  label B_ea:
  if (a | i) goto B_ia;
  i = 0;
  a = 2 << g;
  a = (a | 0 - a) & k;
  if (eqz(a)) goto B_j;
  a = ((ctz(a) << 2) + 67940)[0]:int;
  label B_ia:
  if (eqz(a)) goto B_ca;
  label B_da:
  loop L_ja {
    c = (a[1]:int & -8) - d;
    h = c < e;
    f = a[4]:int;
    if (f) goto B_ka;
    f = a[5]:int;
    label B_ka:
    e = select_if(c, e, h);
    i = select_if(a, i, h);
    a = f;
    if (f) continue L_ja;
  }
  label B_ca:
  if (eqz(i)) goto B_j;
  if (e >= 0[16911]:int - d) goto B_j;
  l = i[6]:int;
  a = i[3]:int;
  if (a == i) goto B_la;
  f = i[2]:int;
  f.d = a;
  a[2]:int = f;
  goto B_c;
  label B_la:
  f = i[5]:int;
  if (eqz(f)) goto B_na;
  h = i + 20;
  goto B_ma;
  label B_na:
  f = i[4]:int;
  if (eqz(f)) goto B_h;
  h = i + 16;
  label B_ma:
  loop L_oa {
    c = h;
    a = f;
    h = a + 20;
    f = a[5]:int;
    if (f) continue L_oa;
    h = a + 16;
    f = a[4]:int;
    if (f) continue L_oa;
  }
  c[0] = 0;
  goto B_c;
  label B_j:
  a = 0[16911]:int;
  if (a < d) goto B_pa;
  e = 0[16914]:int;
  f = a - d;
  if (f < 16) goto B_ra;
  h = e + d;
  h[1]:int = f | 1;
  (e + a)[0]:int = f;
  e[1]:int = d | 3;
  goto B_qa;
  label B_ra:
  e[1]:int = a | 3;
  a = e + a;
  a[1]:int = a[1]:int | 1;
  h = 0;
  f = 0;
  label B_qa:
  0[16911]:int = f;
  0[16914]:int = h;
  a = e + 8;
  goto B_a;
  label B_pa:
  h = 0[16912]:int;
  if (h <= d) goto B_sa;
  0[16912]:int = (e = h - d);
  0[16915]:int = (f = (a = 0[16915]:int) + d);
  f.b = e | 1;
  a[1]:int = d | 3;
  a = a + 8;
  goto B_a;
  label B_sa:
  if (eqz(0[17027]:int)) goto B_ua;
  e = 0[17029]:int;
  goto B_ta;
  label B_ua:
  0[17030]:long@4 = -1L;
  0[17028]:long@4 = 17592186048512L;
  0[17027]:int = (b + 12 & -16) ^ 1431655768;
  0[17032]:int = 0;
  0[17020]:int = 0;
  e = 4096;
  label B_ta:
  a = 0;
  c = e + (g = d + 47);
  i = c & (l = 0 - e);
  if (i <= d) goto B_a;
  a = 0;
  e = 0[17019]:int;
  if (eqz(e)) goto B_va;
  f = 0[17017]:int;
  k = f + i;
  if (k <= f) goto B_a;
  if (k > e) goto B_a;
  label B_va:
  if (0[68080]:ubyte & 4) goto B_xa;
  e = 0[16915]:int;
  if (eqz(e)) goto B_cb;
  a = 68084;
  loop L_db {
    f = a[0]:int;
    if (f > e) goto B_eb;
    if (f + a[1]:int > e) goto B_bb;
    label B_eb:
    a = a[2]:int;
    if (a) continue L_db;
  }
  label B_cb:
  h = f_ta(0);
  if (h == -1) goto B_ya;
  c = i;
  a = 0[17028]:int;
  e = a + -1;
  if (eqz(e & h)) goto B_fb;
  c = i - h + (e + h & 0 - a);
  label B_fb:
  if (c <= d) goto B_ya;
  a = 0[17019]:int;
  if (eqz(a)) goto B_gb;
  e = 0[17017]:int;
  f = e + c;
  if (f <= e) goto B_ya;
  if (f > a) goto B_ya;
  label B_gb:
  a = f_ta(c);
  if (a != h) goto B_ab;
  goto B_wa;
  label B_bb:
  c = c - h & l;
  h = f_ta(c);
  if (h == a[0]:int + a[1]:int) goto B_za;
  a = h;
  label B_ab:
  if (a == -1) goto B_ya;
  if (c < d + 48) goto B_hb;
  h = a;
  goto B_wa;
  label B_hb:
  e = g - c + (e = 0[17029]:int) & 0 - e;
  if (f_ta(e) == -1) goto B_ya;
  c = e + c;
  h = a;
  goto B_wa;
  label B_za:
  if (h != -1) goto B_wa;
  label B_ya:
  0[17020]:int = 0[17020]:int | 4;
  label B_xa:
  h = f_ta(i);
  a = f_ta(0);
  if (h == -1) goto B_e;
  if (a == -1) goto B_e;
  if (h >= a) goto B_e;
  c = a - h;
  if (c <= d + 40) goto B_e;
  label B_wa:
  0[17017]:int = (a = 0[17017]:int + c);
  if (a <= 0[17018]:int) goto B_ib;
  0[17018]:int = a;
  label B_ib:
  e = 0[16915]:int;
  if (eqz(e)) goto B_kb;
  a = 68084;
  loop L_lb {
    if (h == (f = a[0]:int) + (i = a[1]:int)) goto B_jb;
    a = a[2]:int;
    if (a) continue L_lb;
    goto B_g;
  }
  unreachable;
  label B_kb:
  a = 0[16913]:int;
  if (eqz(a)) goto B_nb;
  if (h >= a) goto B_mb;
  label B_nb:
  0[16913]:int = h;
  label B_mb:
  a = 0;
  0[17022]:int = c;
  0[17021]:int = h;
  0[16917]:int = -1;
  0[16918]:int = 0[17027]:int;
  0[17024]:int = 0;
  loop L_ob {
    e = a << 3;
    (e + 67684)[0]:int = (f = e + 67676);
    (e + 67688)[0]:int = f;
    a = a + 1;
    if (a != 32) continue L_ob;
  }
  0[16912]:int = (f = (a = c + -40) - (e = -8 - h & 7));
  0[16915]:int = (e = h + e);
  e[1]:int = f | 1;
  (h + a)[1]:int = 40;
  0[16916]:int = 0[17031]:int;
  goto B_f;
  label B_jb:
  if (e >= h) goto B_g;
  if (e < f) goto B_g;
  if (a[3]:int & 8) goto B_g;
  a[1]:int = i + c;
  0[16915]:int = (f = e + (a = -8 - e & 7));
  0[16912]:int = (a = (h = 0[16912]:int + c) - a);
  f.b = a | 1;
  (e + h)[1]:int = 40;
  0[16916]:int = 0[17031]:int;
  goto B_f;
  label B_i:
  a = 0;
  goto B_b;
  label B_h:
  a = 0;
  goto B_c;
  label B_g:
  if (h >= 0[16913]:int) goto B_pb;
  0[16913]:int = h;
  label B_pb:
  f = h + c;
  a = 68084;
  loop L_sb {
    i = a[0]:int;
    if (i == f) goto B_rb;
    a = a[2]:int;
    if (a) continue L_sb;
    goto B_qb;
  }
  unreachable;
  label B_rb:
  if (eqz(a[12]:ubyte & 8)) goto B_d;
  label B_qb:
  a = 68084;
  loop L_ub {
    f = a[0]:int;
    if (f > e) goto B_vb;
    f = f + a[1]:int;
    if (f > e) goto B_tb;
    label B_vb:
    a = a[2]:int;
    continue L_ub;
  }
  unreachable;
  label B_tb:
  0[16912]:int = (l = (a = c + -40) - (i = -8 - h & 7));
  0[16915]:int = (i = h + i);
  i[1]:int = l | 1;
  (h + a)[1]:int = 40;
  0[16916]:int = 0[17031]:int;
  i = select_if(e, a = f + (39 - f & 7) + -47, a < e + 16);
  i[1]:int = 27;
  (i + 16)[0]:long@4 = 0[17023]:long@4;
  i[2]:long@4 = 0[17021]:long@4;
  0[17023]:int = i + 8;
  0[17022]:int = c;
  0[17021]:int = h;
  0[17024]:int = 0;
  a = i + 24;
  loop L_wb {
    a[1]:int = 7;
    h = a + 8;
    a = a + 4;
    if (h < f) continue L_wb;
  }
  if (i == e) goto B_f;
  i[1]:int = i[1]:int & -2;
  e[1]:int = (h = i - e) | 1;
  i[0]:int = h;
  if (h > 255) goto B_yb;
  a = (h & -8) + 67676;
  f = 0[16909]:int;
  if (f & (h = 1 << (h >> 3))) goto B_ac;
  0[16909]:int = f | h;
  f = a;
  goto B_zb;
  label B_ac:
  f = a[2]:int;
  label B_zb:
  a[2]:int = e;
  f.d = e;
  h = 12;
  i = 8;
  goto B_xb;
  label B_yb:
  a = 31;
  if (h > 16777215) goto B_bc;
  a = (h >> 38 - (a = clz(h >> 8)) & 1) - (a << 1) + 62;
  label B_bc:
  e[7]:int = a;
  e[4]:long@4 = 0L;
  f = (a << 2) + 67940;
  i = 0[16910]:int;
  if (i & (c = 1 << a)) goto B_ec;
  0[16910]:int = i | c;
  f.a = e;
  e[6]:int = f;
  goto B_dc;
  label B_ec:
  a = h << select_if(0, 25 - (a >> 1), a == 31);
  i = f.a;
  loop L_fc {
    f = i;
    if ((f.b & -8) == h) goto B_cc;
    i = a >> 29;
    a = a << 1;
    c = f + (i & 4) + 16;
    i = c[0];
    if (i) continue L_fc;
  }
  c[0] = e;
  e[6]:int = f;
  label B_dc:
  h = 8;
  i = 12;
  f = e;
  a = e;
  goto B_xb;
  label B_cc:
  a = f.c;
  a[3]:int = e;
  f.c = e;
  e[2]:int = a;
  a = 0;
  h = 24;
  i = 12;
  label B_xb:
  (e + i)[0]:int = f;
  (e + h)[0]:int = a;
  label B_f:
  a = 0[16912]:int;
  if (a <= d) goto B_e;
  0[16912]:int = (e = a - d);
  0[16915]:int = (f = (a = 0[16915]:int) + d);
  f.b = e | 1;
  a[1]:int = d | 3;
  a = a + 8;
  goto B_a;
  label B_e:
  f_u()[0]:int = 48;
  a = 0;
  goto B_a;
  label B_d:
  a[0]:int = h;
  a[1]:int = a[1]:int + c;
  a = f_va(h, i, d);
  goto B_a;
  label B_c:
  if (eqz(l)) goto B_gc;
  if (i != (f = ((h = i[7]:int) << 2) + 67940).a) goto B_ic;
  f.a = a;
  if (a) goto B_hc;
  0[16910]:int = (k = k & -2 << h);
  goto B_gc;
  label B_ic:
  (l + select_if(16, 20, l[4] == i))[0]:int = a;
  if (eqz(a)) goto B_gc;
  label B_hc:
  a[6]:int = l;
  f = i[4]:int;
  if (eqz(f)) goto B_jc;
  a[4]:int = f;
  f.g = a;
  label B_jc:
  f = i[5]:int;
  if (eqz(f)) goto B_gc;
  a[5]:int = f;
  f.g = a;
  label B_gc:
  if (e > 15) goto B_lc;
  i[1]:int = (a = e + d) | 3;
  a = i + a;
  a[1]:int = a[1]:int | 1;
  goto B_kc;
  label B_lc:
  i[1]:int = d | 3;
  h = i + d;
  h[1]:int = e | 1;
  (h + e)[0]:int = e;
  if (e > 255) goto B_mc;
  a = (e & -8) + 67676;
  d = 0[16909]:int;
  if (d & (e = 1 << (e >> 3))) goto B_oc;
  0[16909]:int = d | e;
  e = a;
  goto B_nc;
  label B_oc:
  e = a[2]:int;
  label B_nc:
  a[2]:int = h;
  e[3]:int = h;
  h[3]:int = a;
  h[2]:int = e;
  goto B_kc;
  label B_mc:
  a = 31;
  if (e > 16777215) goto B_pc;
  a = (e >> 38 - (a = clz(e >> 8)) & 1) - (a << 1) + 62;
  label B_pc:
  h[7]:int = a;
  h[4]:long@4 = 0L;
  d = (a << 2) + 67940;
  if (k & (f = 1 << a)) goto B_sc;
  0[16910]:int = k | f;
  d.a = h;
  h[6]:int = d;
  goto B_rc;
  label B_sc:
  a = e << select_if(0, 25 - (a >> 1), a == 31);
  f = d.a;
  loop L_tc {
    d = f;
    if ((d.b & -8) == e) goto B_qc;
    f = a >> 29;
    a = a << 1;
    c = d + (f & 4) + 16;
    f = c[0];
    if (f) continue L_tc;
  }
  c[0] = h;
  h[6]:int = d;
  label B_rc:
  h[3]:int = h;
  h[2]:int = h;
  goto B_kc;
  label B_qc:
  a = d.c;
  a[3]:int = h;
  d.c = h;
  h[6]:int = 0;
  h[3]:int = d;
  h[2]:int = a;
  label B_kc:
  a = i + 8;
  goto B_a;
  label B_b:
  if (eqz(k)) goto B_uc;
  if (h != (f = ((i = h[7]:int) << 2) + 67940).a) goto B_wc;
  f.a = a;
  if (a) goto B_vc;
  0[16910]:int = j & -2 << i;
  goto B_uc;
  label B_wc:
  (k + select_if(16, 20, k[4] == h))[0]:int = a;
  if (eqz(a)) goto B_uc;
  label B_vc:
  a[6]:int = k;
  f = h[4]:int;
  if (eqz(f)) goto B_xc;
  a[4]:int = f;
  f.g = a;
  label B_xc:
  f = h[5]:int;
  if (eqz(f)) goto B_uc;
  a[5]:int = f;
  f.g = a;
  label B_uc:
  if (e > 15) goto B_zc;
  h[1]:int = (a = e + d) | 3;
  a = h + a;
  a[1]:int = a[1]:int | 1;
  goto B_yc;
  label B_zc:
  h[1]:int = d | 3;
  d = h + d;
  d.b = e | 1;
  (d + e)[0]:int = e;
  if (eqz(g)) goto B_ad;
  f = (g & -8) + 67676;
  a = 0[16914]:int;
  i = 1 << (g >> 3);
  if (i & c) goto B_cd;
  0[16909]:int = i | c;
  i = f;
  goto B_bd;
  label B_cd:
  i = f.c;
  label B_bd:
  f.c = a;
  i[3]:int = a;
  a[3]:int = f;
  a[2]:int = i;
  label B_ad:
  0[16914]:int = d;
  0[16911]:int = e;
  label B_yc:
  a = h + 8;
  label B_a:
  g_a = b + 16;
  return a;
}

function f_va(a:int_ptr, b:int_ptr, c:int_ptr):int {
  var f:int;
  var h:int_ptr;
  var j:int_ptr;
  var d:int_ptr = a + (-8 - a & 7);
  d[1] = c | 3;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    b + (-8 - b & 7);
  a = e - (f = d + c);
  if (e != 0[16915]:int) goto B_b;
  0[16915]:int = f;
  0[16912]:int = (c = 0[16912]:int + a);
  f[1]:int = c | 1;
  goto B_a;
  label B_b:
  if (e != 0[16914]:int) goto B_c;
  0[16914]:int = f;
  0[16911]:int = (c = 0[16911]:int + a);
  f[1]:int = c | 1;
  (f + c)[0]:int = c;
  goto B_a;
  label B_c:
  b = e.b;
  if ((b & 3) != 1) goto B_d;
  var g:int = b & -8;
  c = e.d;
  if (b > 255) goto B_f;
  if (c != (h = e.c)) goto B_g;
  0[16909]:int = 0[16909]:int & -2 << (b >> 3);
  goto B_e;
  label B_g:
  h[3] = c;
  c[2] = h;
  goto B_e;
  label B_f:
  var i:int_ptr = e.g;
  if (c == e) goto B_i;
  b = e.c;
  b[3] = c;
  c[2] = b;
  goto B_h;
  label B_i:
  b = e.f;
  if (eqz(b)) goto B_l;
  h = e + 20;
  goto B_k;
  label B_l:
  b = e.e;
  if (eqz(b)) goto B_j;
  h = e + 16;
  label B_k:
  loop L_m {
    j = h;
    c = b;
    h = c + 20;
    b = c[5];
    if (b) continue L_m;
    h = c + 16;
    b = c[4];
    if (b) continue L_m;
  }
  j[0] = 0;
  goto B_h;
  label B_j:
  c = 0;
  label B_h:
  if (eqz(i)) goto B_e;
  if (e != (b = ((h = e.h) << 2) + 67940)[0]) goto B_o;
  b[0] = c;
  if (c) goto B_n;
  0[16910]:int = 0[16910]:int & -2 << h;
  goto B_e;
  label B_o:
  (i + select_if(16, 20, i[4] == e))[0]:int = c;
  if (eqz(c)) goto B_e;
  label B_n:
  c[6] = i;
  b = e.e;
  if (eqz(b)) goto B_p;
  c[4] = b;
  b[6] = c;
  label B_p:
  b = e.f;
  if (eqz(b)) goto B_e;
  c[5] = b;
  b[6] = c;
  label B_e:
  a = g + a;
  e = e + g;
  b = e.b;
  label B_d:
  e.b = b & -2;
  f[1]:int = a | 1;
  (f + a)[0]:int = a;
  if (a > 255) goto B_q;
  c = (a & -8) + 67676;
  b = 0[16909]:int;
  if (b & (a = 1 << (a >> 3))) goto B_s;
  0[16909]:int = b | a;
  a = c;
  goto B_r;
  label B_s:
  a = c[2];
  label B_r:
  c[2] = f;
  a[3] = f;
  f[3]:int = c;
  f[2]:int = a;
  goto B_a;
  label B_q:
  c = 31;
  if (a > 16777215) goto B_t;
  c = (a >> 38 - (c = clz(a >> 8)) & 1) - (c << 1) + 62;
  label B_t:
  f[7]:int = c;
  f[4]:long@4 = 0L;
  b = (c << 2) + 67940;
  h = 0[16910]:int;
  if (h & (e = 1 << c)) goto B_w;
  0[16910]:int = h | e;
  b[0] = f;
  f[6]:int = b;
  goto B_v;
  label B_w:
  c = a << select_if(0, 25 - (c >> 1), c == 31);
  h = b[0];
  loop L_x {
    b = h;
    if ((b[1] & -8) == a) goto B_u;
    h = c >> 29;
    c = c << 1;
    e = b + (h & 4) + 16;
    h = e.a;
    if (h) continue L_x;
  }
  e.a = f;
  f[6]:int = b;
  label B_v:
  f[3]:int = f;
  f[2]:int = f;
  goto B_a;
  label B_u:
  c = b[2];
  c[3] = f;
  b[2] = f;
  f[6]:int = 0;
  f[3]:int = b;
  f[2]:int = c;
  label B_a:
  return d + 8;
}

function f_wa(a:{ a:long, b:long }, b:long, c:long, d:int) {
  var e:long;
  if (eqz(d & 64)) goto B_b;
  c = b << i64_extend_i32_u(d + -64);
  b = 0L;
  goto B_a;
  label B_b:
  if (eqz(d)) goto B_a;
  c = b >> i64_extend_i32_u(64 - d) | c << (e = i64_extend_i32_u(d));
  b = b << e;
  label B_a:
  a.a = b;
  a.b = c;
}

function f_xa(a:{ a:long, b:long }, b:long, c:long, d:int) {
  var e:long;
  if (eqz(d & 64)) goto B_b;
  b = c >> i64_extend_i32_u(d + -64);
  c = 0L;
  goto B_a;
  label B_b:
  if (eqz(d)) goto B_a;
  b = c << i64_extend_i32_u(64 - d) | b >> (e = i64_extend_i32_u(d));
  c = c >> e;
  label B_a:
  a.a = b;
  a.b = c;
}

function f_ya(a:long, b:long):double {
  var i:long;
  var d:int;
  var e:int;
  var j:long;
  var k:long;
  var c:long_ptr = g_a - 32;
  g_a = c;
  var h:long = b & 281474976710655L;
  i = b >> 48L & 32767L;
  d = i32_wrap_i64(i);
  if (d + -15361 > 2045) goto B_b;
  h = a >> 60L | h << 4L;
  j = i64_extend_i32_u(d + -15360);
  a = a & 1152921504606846975L;
  if (a < 576460752303423489L) goto B_d;
  h = h + 1L;
  goto B_c;
  label B_d:
  if (a != 576460752303423488L) goto B_c;
  h = (h & 1L) + h;
  label B_c:
  k = select_if(0L, h, d = h > 4503599627370495L);
  j = i64_extend_i32_u(d) + j;
  goto B_a;
  label B_b:
  if (eqz(a | h)) goto B_e;
  if (i != 32767L) goto B_e;
  k = (a >> 60L | h << 4L) | 2251799813685248L;
  j = 2047L;
  goto B_a;
  label B_e:
  if (d <= 17406) goto B_f;
  j = 2047L;
  k = 0L;
  goto B_a;
  label B_f:
  k = 0L;
  j = 0L;
  var f:int = select_if(15360, 15361, e = eqz(i));
  var g:int = f - d;
  if (g > 112) goto B_a;
  f_wa(c + 16, a, h = select_if(h, h | 281474976710656L, e), 128 - g);
  f_xa(c, a, h, g);
  h = c[0];
  a = h >> 60L | (c + 8)[0]:long << 4L;
  h = (h & 1152921504606846975L) |
      i64_extend_i32_u(f != d & (c[2] | (c + 16 + 8)[0]:long) != 0L);
  if (h < 576460752303423489L) goto B_h;
  a = a + 1L;
  goto B_g;
  label B_h:
  if (h != 576460752303423488L) goto B_g;
  a = (a & 1L) + a;
  label B_g:
  k = select_if(a ^ 4503599627370496L, a, d = a > 4503599627370495L);
  j = i64_extend_i32_u(d);
  label B_a:
  g_a = c + 32;
  return 
    f64_reinterpret_i64((j << 52L | (b & -9223372036854775808L)) | k);
}

function f_za(a:int) {
  g_b = a
}

function f_ab():int {
  return g_b
}

export function emscripten_stack_init() {
  g_d = 65536;
  g_c = 0 + 15 & -16;
}

export function emscripten_stack_get_free():int {
  return g_a - g_c
}

export function emscripten_stack_get_base():int {
  return g_d
}

export function emscripten_stack_get_end():int {
  return g_c
}

export function fflush(a:int):int {
  var c:int;
  var b:int;
  var d:int;
  if (a) goto B_a;
  b = 0;
  if (eqz(d_b[36]:int)) goto B_b;
  b = fflush(d_b[36]:int);
  label B_b:
  if (eqz(0[16860]:int)) goto B_c;
  b = fflush(0[16860]:int) | b;
  label B_c:
  a = f_p()[0]:int;
  if (eqz(a)) goto B_d;
  loop L_e {
    c = 0;
    if (a[19]:int < 0) goto B_f;
    c = f_l(a);
    label B_f:
    if (a[5]:int == a[7]:int) goto B_g;
    b = fflush(a) | b;
    label B_g:
    if (eqz(c)) goto B_h;
    f_m(a);
    label B_h:
    a = a[14]:int;
    if (a) continue L_e;
  }
  label B_d:
  f_q();
  return b;
  label B_a:
  if (a[19]:int >= 0) goto B_j;
  c = 1;
  goto B_i;
  label B_j:
  c = eqz(f_l(a));
  label B_i:
  if (a[5]:int == a[7]:int) goto B_m;
  call_indirect(a, 0, 0, a[9]:int);
  if (a[5]:int) goto B_m;
  b = -1;
  if (eqz(c)) goto B_l;
  goto B_k;
  label B_m:
  b = a[1]:int;
  if (b == (d = a[2]:int)) goto B_n;
  call_indirect(a, i64_extend_i32_s(b - d), 1, a[10]:int);
  label B_n:
  b = 0;
  a[7]:int = 0;
  a[2]:long = 0L;
  a[1]:long@4 = 0L;
  if (c) goto B_k;
  label B_l:
  f_m(a);
  label B_k:
  return b;
}

export function emscripten_stack_restore(a:int) {
  g_a = a
}

export function emscripten_stack_alloc(a:int):int {
  var b:int = g_a - a & -16;
  g_a = b;
  return b;
}

export function emscripten_stack_get_current():int {
  return g_a
}

function f_jb(a:int, b:int, c:long, d:int):long {
  return call_indirect(b, c, d, a)
}

export function dynCall_jiji(a:int, b:int, c:int, d:int, e:int):int {
  var f:long = 
    f_jb(a, b, i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L, e);
  f_za(i32_wrap_i64(f >> 32L));
  return i32_wrap_i64(f);
}

