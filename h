<!DOCTYPE html>

Purpose: Defines the document type and HTML version.
Example:

<!DOCTYPE html>

=================================
<html>
Purpose: Root element of an HTML document.
Example:

<html>
  <!-- content -->
</html>

=================================
<head>
Purpose: Contains metadata/information for the document.
Example:

<head>
  <title>Document Title</title>
</head>

=================================
<body>
Purpose: Contains the content of an HTML document.
Example:

<body>
  <h1>Hello, World!</h1>
</body>

=================================
<title>
Purpose: Sets the title of the document, shown in the browser’s title bar or tab.
Example:

<head>
  <title>My Web Page</title>
</head>

=========================================
2. Text Content Tags
<h1> to <h6>
Purpose: Defines HTML headings, <h1> being the highest and <h6> the lowest.
Example:

<h1>Main Heading</h1>
<h2>Subheading</h2>

==========================================
<p>
Purpose: Defines a paragraph.
Example:

<p>This is a paragraph.</p>
<br>
Purpose: Inserts a single line break.
Example:

<p>Line one<br>Line two</p>

=====================================
<hr>
Purpose: Defines a thematic change in the content, usually a horizontal line.
Example:

<hr>

=====================================
<blockquote>
Purpose: Defines a section that is quoted from another source.
Example:

<blockquote>
  This is a blockquote.
</blockquote>
<pre>
Purpose: Defines preformatted text.
Example:

<pre>
  Preformatted text
</pre>
<b> and <strong>
Purpose: Defines bold text; <strong> also indicates that the text is important.
Example:

<b>Bold text</b>
<strong>Strong text</strong>
<i> and <em>
Purpose: Defines italicized text; <em> also indicates emphasis.
Example:

<i>Italic text</i>
<em>Emphasized text</em>
<mark>
Purpose: Highlights or marks text.
Example:

<mark>Highlighted text</mark>
<small>
Purpose: Defines smaller text.
Example:

<small>Small text</small>
<del> and <ins>
Purpose: Defines deleted and inserted text.
Example:

<del>Deleted text</del>
<ins>Inserted text</ins>
<sup> and <sub>
Purpose: Defines superscripted and subscripted text.
Example:

H<sub>2</sub>O
E=mc<sup>2</sup>
3. List Tags
<ul> and <li>
Purpose: Defines an unordered list.
Example:

<ul>
  <li>Item 1</li>
  <li>Item 2</li>
</ul>
<ol> and <li>
Purpose: Defines an ordered list.
Example:

<ol>
  <li>First item</li>
  <li>Second item</li>
</ol>
<dl>, <dt>, and <dd>
Purpose: Defines a description list.
Example:

<dl>
  <dt>Term</dt>
  <dd>Definition</dd>
</dl>
4. Table Tags
<table>
Purpose: Defines a table.
Example:

<table>
  <!-- table rows and data cells -->
</table>
<tr>
Purpose: Defines a row in a table.
Example:

<table>
  <tr>
    <!-- table headers or data cells -->
  </tr>
</table>
<th>
Purpose: Defines a header cell in a table.
Example:

<table>
  <tr>
    <th>Header</th>
  </tr>
</table>
<td>
Purpose: Defines a cell in a table.
Example:

<table>
  <tr>
    <td>Data</td>
  </tr>
</table>
<caption>
Purpose: Defines a table caption.
Example:

<table>
  <caption>Table Caption</caption>
</table>
5. Form Tags
<form>
Purpose: Defines an HTML form for user input.
Example:

<form action="/submit" method="post">
  <!-- form elements -->
</form>
<input>
Purpose: Defines an input control.
Example:

<input type="text" name="username">
<textarea>
Purpose: Defines a multiline text input control.
Example:

<textarea name="message"></textarea>
<label>
Purpose: Defines a label for an <input> element.
Example:

<label for="username">Username:</label>
<input type="text" id="username" name="username">
<select> and <option>
Purpose: Defines a drop-down list.
Example:

<select name="options">
  <option value="1">Option 1</option>
  <option value="2">Option 2</option>
</select>
<button>
Purpose: Defines a clickable button.
Example:

<button type="submit">Submit</button>
<fieldset> and <legend>
Purpose: Groups related elements in a form and defines a caption for the group.
Example:

<fieldset>
  <legend>Personal Information</legend>
  <label for="name">Name:</label>
  <input type="text" id="name" name="name">
</fieldset>
6. Multimedia Tags
<img>
Purpose: Embeds an image.
Example:

<img src="image.jpg" alt="Description">
<audio>
Purpose: Embeds sound content.
Example:

<audio controls>
  <source src="audio.mp3" type="audio/mpeg">
  Your browser does not support the audio element.
</audio>
<video>
Purpose: Embeds video content.
Example:

<video controls>
  <source src="video.mp4" type="video/mp4">
  Your browser does not support the video element.
</video>
<iframe>
Purpose: Embeds another HTML page within the current page.
Example:

<iframe src="https://example.com"></iframe>
7. Link Tags
<a>
Purpose: Defines a hyperlink.
Example:

<a href="https://example.com">Visit Example</a>
8. Meta Information Tags
<meta>
Purpose: Defines metadata about an HTML document.
Example:

<meta charset="UTF-8">
<meta name="description" content="Free Web tutorials">
<link>
Purpose: Defines a relationship between the current document and an external resource (often used to link to stylesheets).
Example:

<link rel="stylesheet" href="styles.css">
9. Script Tags
<script>
Purpose: Defines client-side JavaScript.
Example:

<script>
  console.log('Hello, World!');
</script>
<noscript>
Purpose: Defines an alternate content for users that have disabled scripts in their browser or have a browser that doesn’t support script.
Example:

<noscript>
  JavaScript is not enabled in your browser.
</noscript>
10. Semantic HTML5 Tags
<section>
Purpose: Defines a section in a document.
Example:

<section>
  <h2>Section Title</h2>
  <p>Section content...</p>
</section>
<article>
Purpose: Defines an independent, self-contained content.
Example:

<article>
  <h2>Article Title</h2>
  <p>Article content...</p>
</article>
<aside>
Purpose: Defines content aside from the content it is placed in.
Example:

<aside>
  <h2>Related Content</h2>
  <p>Aside content...</p>
</aside>
<header>
Purpose: Defines a header for a document or section.
Example:

<header>
  <h1>Page Title</h1>
  <nav>Navigation Links</nav>
</header>
<footer>
Purpose: Defines a footer for a document or section.
Example:

<footer>
  <p>Footer content...</p>
</footer>
<nav>
Purpose: Defines navigation links.
Example:

<nav>
  <a href="#home">Home</a>
  <a href="#about">About</a>
</nav>
<main>
Purpose: Specifies the main content of a document.
Example:

<main>
  <h1>Main Content</h1>
  <p>This is the main content area.</p>
</main>
<figure> and <figcaption>
Purpose: Specifies self-contained content and a caption for the <figure> element.
Example:

<figure>
  <img src="image.jpg" alt="Description">
  <figcaption>Image Caption</figcaption>
</figure>
<time>
Purpose: Defines a specific time (or a datetime).
Example:

<time datetime="2020-05-15">May 15, 2020</time>
11. Miscellaneous Tags
<div>
Purpose: Defines a division or a section in an HTML document.
Example:

<div>
  <p>Some content...</p>
</div>
<span>
Purpose: Defines a section in a document.
Example:

<span>Inline content</span>